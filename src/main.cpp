#include "log.hpp"

int main() {
    const Log* log = new Log(Log::Level::WARN);
    log->error("Hello World!");
    log->warn("Hello World!");
    log->info("Hello World!");
    return 0;
}