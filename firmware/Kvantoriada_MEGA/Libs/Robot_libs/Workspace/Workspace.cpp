#include "Workspace.h"

Workspace::Workspace()
{

};

void Workspace::set_cell_size(int  _cell_X_size_, int  _cell_Y_size_, int  _cell_Z_size_)
{
    _cell_X_size = _cell_X_size_;
    _cell_Y_size = _cell_Y_size_;
    _cell_Z_size = _cell_Z_size_;

};

void Workspace::set_ws_size(int  _ws_X_size_, int  _ws_Y_size_, int  _ws_Z_size_)
{
    _ws_X_size = _ws_X_size_;
    _ws_Y_size = _ws_Y_size_;
    _ws_Z_size = _ws_Z_size_;
};

int  Workspace::put_Cell_Size(char Cell_Axis)
{
    switch (Cell_Axis)
    {
    case 0 :
        return _cell_X_size;
        break;

    case 1 :
        return _cell_Y_size;
        break;

    case 2 :
        return _cell_Z_size;
        break; 
    
    }
};

int  Workspace::put_WS_Size(char WS_Axis)
{
     switch (WS_Axis)
    {
    case 0 :
        return _ws_X_size;
        break;

    case 1 :
        return _ws_Y_size;
        break;

    case 2 :
        return _ws_Z_size;
        break; 
    
    }
};