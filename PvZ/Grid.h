//#pragma once
//class pGrid
//{
//public:
//	zGrid grid[5][11];
//	pGrid()
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			for (int j = 0; j < 11; j++)
//			{
//				grid[i][j].grid[i][j] = 0;
//			}
//		}
//	}
//};
//
//class zGrid
//{
//public:
//	int grid[5][11];
//	int plantNo;
//};
//
//pGrid p;

#pragma once
#include "iostream"
#include "coordinates.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
using namespace std;
//Smaller Grid

//The Inner Grid
class zGrid {
public:
    int** iGrid;
    int plantId; //Stores the id of plant
    //Dimension of grid
    const int rows;
    const int cols;
    int x, y;

    /////////////////////////////////////////////////////////////////////////////////////////////////
    //     functions
        // Constructor to initialize dynamic array
    zGrid(int x_position = 0, int y_position =0) : rows(5), cols(11), plantId(0) {

        iGrid = new int* [rows];
        for (int i = 0; i < rows; i++)
        {
            iGrid[i] = new int[cols];
            //intialzes grid to zero while allocating its heap memory
            for (int j = 0; j < cols; j++)
            {
                iGrid[i][j] = 0;
            }
        }
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////
        //displaying
    void display() const
    {
        cout << "Plant ID: " << plantId << endl; //Plant at that Cell


        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < cols; j++) {
                cout << iGrid[i][j] << " ";
            }
            cout << endl;
        }


        cout << endl;
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////
        // Destructor 
    ~zGrid()
    {
        for (int i = 0; i < rows; i++) {
            delete[] iGrid[i];
        }
        delete[] iGrid;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////
//Outer Grid
class pGrid {
public:
    zGrid** oGrid;
    const int rows;
    const int cols;
    int x, y;

    /////////////////////////////////////////////////////////////////////////////////////////////////
    //     function
        // Constructor to initialize zGrid array
    pGrid(int x_position = 0, int y_position = 0) : rows(5), cols(11) {
        oGrid = new zGrid * [rows];
        for (int i = 0; i < rows; i++)
        {
            oGrid[i] = new zGrid[cols];
            //here we will not initalize because when the object is created [in heap
            //using new] zgrid's constructor initializes both the zGrid and plant id.a

        }
    }

    /////////////////////////
           //adding plant
    void addPlant(int c, int r, int id)
    {
        /*cout << "ok" << endl;
        cout << x << ",," << y << endl;*/
        oGrid[r][c].plantId = id;
    }
    bool IsEmpty(int c, int r)
    {
        if (oGrid[r][c].plantId == 0)
        {
            return true;
        }
        else
            return false;
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////
        //function to display the grid system
        //It calls display function small grid.
        //so on each cell ( i, j ) of larger grid[pGrid], display of 
        //the smaller [zGrid] is called.
    void display() const
    {
        cout << "Outer grid:" << endl;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "Grid at (" << i << "," << j << ") :" << endl;

                oGrid[i][j].display(); // Display each inner zGrid (smaller grid ) 
            }
            cout << "#########################" << endl << endl;

        }
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////
       //function that just display the grid for plant
    void displayPlant()
    {
        cout << "Grid for Plants: " << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << oGrid[i][j].plantId << " "; //diplaying plant 
            }
            cout << endl;
        }

    }
    /////////////////////////////////////////////////////////////////////////////////////////////////
    ~pGrid() { // Destructor to clean up zGrid objects
        /*for (int i = 0; i < 5; i++) {
            delete oGrid[i];
        }*/
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////
};

/////////////////////////////////////////////////////////////////////////////////////////////////