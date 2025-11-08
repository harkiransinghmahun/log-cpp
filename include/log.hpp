#ifndef LOG_HPP
#define LOG_HPP
#include <string>
#include <iostream>

class Log {
public:

    enum Level {
        ERROR,
        WARN,
        INFO,
    };

private:
    Level m_level;

public:
    explicit Log(const Level level = INFO) : m_level(level) {}

    void setLevel(Level level);
    void error(const std::string& msg) const;
    void warn(const std::string& msg) const;
    void info(const std::string& msg) const;
};

#endif


