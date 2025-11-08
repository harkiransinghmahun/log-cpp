#include <iostream>
#include "log.hpp"

void Log::setLevel(const Level level) {
    m_level = level;
    std::cout << "Set level to " << level << std::endl;
}

void Log::error(const std::string& msg) const {
    if (m_level >= Level::ERROR) {
        std::cout << "[ERROR]: " << msg << std::endl;
    }
}

void Log::warn(const std::string& msg) const {
    if (m_level >= Level::WARN) {
        std::cout << "[WARN]: " << msg << std::endl;
    }
}

void Log::info(const std::string& msg) const {
    if (m_level >= Level::INFO) {
        std::cout << "[INFO]: " << msg << std::endl;
    }
}

