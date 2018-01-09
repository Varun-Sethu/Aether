//
// Created by varun on 6/01/2018.
//

#ifndef AETHER_ERRORS_H
#define AETHER_ERRORS_H


#include <string>
#include <iostream>


// Macros for quickly throwing errors
#define ERROR_ERROR(msg, type) Aether::Errors.getInstance().throwError(type, ERROR, msg, __LINE__, __FILE__)
#define ERROR_WARNING(msg, type) Aether::Errors.getInstance().throwError(type, WARNING, msg, __LINE__, __FILE__)
#define ERROR_CRITICAL(msg, type) Aether::Errors.getInstance().throwError(type, CRITICAL, msg, __LINE__, __FILE__)
#define ERROR_LOG(msg, type) Aether::Errors.getInstance().throwError(type, GOOD, msg, __LINE__, __FILE__)

// Include Util.h for the dissalow_copy_and_assign function to make the Errors class a singleton class


/*
 * USAGE: ERROR_ERROR("Something went wrong", SEMANTIC_ERROR)
 */


/*
 * Errors class for Aether, contains different error types and throws them if something wrong happens
 */

#include "../Util/Macros.h"
#include "../Util/Options.h"

namespace Aether {


    // Describes the severity of an error
    enum ERROR_SEVERITY {
        GOOD,
        WARNING,
        ERROR,
        CRITICAL
    };

    // Describes the different types of errors that can be thrown
    enum ERROR_TYPES {
        NO_ERROR,
        SYNTAX_ERROR,
        SEMANTIC_ERROR,
        RUNTIME_ERROR,
        COMPILE_TIME_ERROR
    };

    // Function which converts an error type to a string
    static std::string convToString(ERROR_TYPES errorType) {
        switch (errorType) {
            case SYNTAX_ERROR:
                return "Syntax Error";
            case SEMANTIC_ERROR:
                return "Semantic Error";
            case RUNTIME_ERROR:
                return "Runtime Error";
            case COMPILE_TIME_ERROR:
                return "Compile Time Error";
        }

        return "NO Error";
    }

    // Function to convert error severity to a string
    static std::string convToString(ERROR_SEVERITY errorSeverity) {
        switch (errorSeverity) {
            case WARNING:
                return "Warning";
            case ERROR:
                return "Error";
            case CRITICAL:
                return "Critical";
        }

        return "Good";
    }



    /*
     * What an error looks like: [Context](ERROR_TYPE, ERROR_SEVERITY) Message {Line: x, File: ****}
     * Example: [My Error](RUNTIME_ERROR, CRITICAL) You did something wrong {Line: 52, File: /home/$USER/Desktop/project/src/file.ae}
     */




    // SINGLETON class
    class Errors {
    public:

        // Returns the instance of errors in accordance with the Singleton design paattern
        Errors& getInstance() {
            static Errors instance;
            return instance;
        }

        // Update Context
        inline void updateContext(const std::string& context) {
            _context = context;
        }

        // Reset context
        inline void resetContext() {
            _context = "";
        }


        // Function that throws an error given the right parameters
        void throwError(ERROR_TYPES errorType, ERROR_SEVERITY errorSeverity, std::string msg, std::string line, std::string file) {
            switch (errorSeverity) {
                case CRITICAL:
                case ERROR:
                    std::cerr << "[" << _context << "]" << "(" << convToString(errorType) << ", "
                            << convToString(errorSeverity) << ") " << msg << " {Line: " << line << ", File: " << file;

                case GOOD:
                    if(MUTE_LOG) {
                        return;
                    }
                    std::cerr << "[" << _context << "]" << "(" << convToString(errorType) << ", "
                              << convToString(errorSeverity) << ") " << msg << " {Line: " << line << ", File: " << file;
                case WARNING:
                    if (MUTE_WARNINGS) {
                        return;
                    }
                    std::clog << "[" << _context << "]" << "(" << convToString(errorType) << ", "
                              << convToString(errorSeverity) << ") " << msg << " {Line: " << line << ", File: " << file;
            }
        }



    private:
        std::string _context = "Compiler Error";
        Errors();
        // Prevent initialisation coz singleton
        DISALLOW_COPY_AND_ASSIGN(Errors)
    };




}


#endif //AETHER_ERRORS_H
