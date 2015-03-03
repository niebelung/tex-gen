#include "tex_table.h"

namespace tex_gen
{
    TexTable::TexTable(int rows, int cols) :
        m_numRows(rows),
        m_numCols(cols),
        m_children(m_numRows, std::vector<boost::variant<double, std::string, tex_gen::TexComponent>>(m_numCols))
    {

    }

    void TexTable::render()
    {

    }

    void TexTable::setItem(int row, int col, TexComponent * c)
    {

    }

}