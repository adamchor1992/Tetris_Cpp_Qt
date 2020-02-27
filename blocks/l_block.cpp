#include "l_block.h"

LBlock::LBlock() : BlockBase(QString("L"))
{
    m_CurrentRotation = 0;
}

void LBlock::RotateBlock()
{
    m_CentralSquareX = m_BlockCoordinates.at(2);
    m_CentralSquareY = m_BlockCoordinates.at(3);

    if(m_CurrentRotation == 0)
    {
        int newSquare1X = m_CentralSquareX - 1;
        int newSquare1Y = m_CentralSquareY;
        int newCentralSquareX = m_CentralSquareX;
        int newCentralSquareY = m_CentralSquareY;
        int newSquare2X = m_CentralSquareX;
        int newSquare2Y = m_CentralSquareY + 1;
        int newSquare3X = m_CentralSquareX;
        int newSquare3Y = m_CentralSquareY + 2;

        if(newSquare1X > 10 || newSquare1X < 1)
        {
            return;
        }
        if(newCentralSquareX > 10 || newCentralSquareX < 1)
        {
            return;
        }
        if(newSquare2X > 10 || newSquare2X < 1)
        {
            return;
        }
        if(newSquare3X > 10 || newSquare3X < 1)
        {
            return;
        }

        if(newSquare1Y > 20 || newSquare1Y < 1)
        {
            return;
        }
        if(newCentralSquareY > 20 || newCentralSquareY < 1)
        {
            return;
        }
        if(newSquare2Y > 20 || newSquare2Y < 1)
        {
            return;
        }
        if(newSquare3Y > 20 || newSquare3Y < 1)
        {
            return;
        }

        m_BlockCoordinates[0] = newSquare1X;
        m_BlockCoordinates[1] = newSquare1Y;
        m_BlockCoordinates[2] = newCentralSquareX;
        m_BlockCoordinates[3] = newCentralSquareY;
        m_BlockCoordinates[4] = newSquare2X;
        m_BlockCoordinates[5] = newSquare2Y;
        m_BlockCoordinates[6] = newSquare3X;
        m_BlockCoordinates[7] = newSquare3Y;

        m_CurrentRotation = 1;
    }
    else if(m_CurrentRotation == 1)
    {
        int newSquare1X = m_CentralSquareX;
        int newSquare1Y = m_CentralSquareY - 1;
        int newCentralSquareX = m_CentralSquareX;
        int newCentralSquareY = m_CentralSquareY;
        int newSquare2X = m_CentralSquareX - 1;
        int newSquare2Y = m_CentralSquareY;
        int newSquare3X = m_CentralSquareX - 2;
        int newSquare3Y = m_CentralSquareY;

        if(newSquare1X > 10 || newSquare1X < 1)
        {
            return;
        }
        if(newCentralSquareX > 10 || newCentralSquareX < 1)
        {
            return;
        }
        if(newSquare2X > 10 || newSquare2X < 1)
        {
            return;
        }
        if(newSquare3X > 10 || newSquare3X < 1)
        {
            return;
        }

        if(newSquare1Y > 20 || newSquare1Y < 1)
        {
            return;
        }
        if(newCentralSquareY > 20 || newCentralSquareY < 1)
        {
            return;
        }
        if(newSquare2Y > 20 || newSquare2Y < 1)
        {
            return;
        }
        if(newSquare3Y > 20 || newSquare3Y < 1)
        {
            return;
        }

        m_BlockCoordinates[0] = newSquare1X;
        m_BlockCoordinates[1] = newSquare1Y;
        m_BlockCoordinates[2] = newCentralSquareX;
        m_BlockCoordinates[3] = newCentralSquareY;
        m_BlockCoordinates[4] = newSquare2X;
        m_BlockCoordinates[5] = newSquare2Y;
        m_BlockCoordinates[6] = newSquare3X;
        m_BlockCoordinates[7] = newSquare3Y;

        m_CurrentRotation = 2;
    }
    else if(m_CurrentRotation == 2)
    {
        int newSquare1X = m_CentralSquareX + 1;
        int newSquare1Y = m_CentralSquareY;
        int newCentralSquareX = m_CentralSquareX;
        int newCentralSquareY = m_CentralSquareY;
        int newSquare2X = m_CentralSquareX;
        int newSquare2Y = m_CentralSquareY - 1;
        int newSquare3X = m_CentralSquareX;
        int newSquare3Y = m_CentralSquareY - 2;

        if(newSquare1X > 10 || newSquare1X < 1)
        {
            return;
        }
        if(newCentralSquareX > 10 || newCentralSquareX < 1)
        {
            return;
        }
        if(newSquare2X > 10 || newSquare2X < 1)
        {
            return;
        }
        if(newSquare3X > 10 || newSquare3X < 1)
        {
            return;
        }

        if(newSquare1Y > 20 || newSquare1Y < 1)
        {
            return;
        }
        if(newCentralSquareY > 20 || newCentralSquareY < 1)
        {
            return;
        }
        if(newSquare2Y > 20 || newSquare2Y < 1)
        {
            return;
        }
        if(newSquare3Y > 20 || newSquare3Y < 1)
        {
            return;
        }

        m_BlockCoordinates[0] = newSquare1X;
        m_BlockCoordinates[1] = newSquare1Y;
        m_BlockCoordinates[2] = newCentralSquareX;
        m_BlockCoordinates[3] = newCentralSquareY;
        m_BlockCoordinates[4] = newSquare2X;
        m_BlockCoordinates[5] = newSquare2Y;
        m_BlockCoordinates[6] = newSquare3X;
        m_BlockCoordinates[7] = newSquare3Y;

        m_CurrentRotation = 3;
    }
    else if(m_CurrentRotation == 3)
    {
        int newSquare1X = m_CentralSquareX;
        int newSquare1Y = m_CentralSquareY + 1;
        int newCentralSquareX = m_CentralSquareX;
        int newCentralSquareY = m_CentralSquareY;
        int newSquare2X = m_CentralSquareX + 1;
        int newSquare2Y = m_CentralSquareY;
        int newSquare3X = m_CentralSquareX + 2;
        int newSquare3Y = m_CentralSquareY;

        if(newSquare1X > 10 || newSquare1X < 1)
        {
            return;
        }
        if(newCentralSquareX > 10 || newCentralSquareX < 1)
        {
            return;
        }
        if(newSquare2X > 10 || newSquare2X < 1)
        {
            return;
        }
        if(newSquare3X > 10 || newSquare3X < 1)
        {
            return;
        }

        if(newSquare1Y > 20 || newSquare1Y < 1)
        {
            return;
        }
        if(newCentralSquareY > 20 || newCentralSquareY < 1)
        {
            return;
        }
        if(newSquare2Y > 20 || newSquare2Y < 1)
        {
            return;
        }
        if(newSquare3Y > 20 || newSquare3Y < 1)
        {
            return;
        }

        m_BlockCoordinates[0] = newSquare1X;
        m_BlockCoordinates[1] = newSquare1Y;
        m_BlockCoordinates[2] = newCentralSquareX;
        m_BlockCoordinates[3] = newCentralSquareY;
        m_BlockCoordinates[4] = newSquare2X;
        m_BlockCoordinates[5] = newSquare2Y;
        m_BlockCoordinates[6] = newSquare3X;
        m_BlockCoordinates[7] = newSquare3Y;

        m_CurrentRotation = 0;
    }
}