#pragma once

class board {
public:
    enum directions {
        up,
        down,
        right,
        left
    };

    void try_move(directions direction, entity *e);

private:
};