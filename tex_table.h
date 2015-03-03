#ifndef _TEX_TABLE_H_
#define _TEX_TABLE_H_

#include "tex_component.h"
#include <vector>
#include <string>
#include <boost/variant.hpp>

namespace tex_gen
{

class TexTable
    : public TexComponent
{
public:
    TexTable(int rows, int cols);

    void render() override;

    void setItem(int row, int col, TexComponent * c);
    void setHHeader(int row, int col, TexComponent * c);

private:

    int m_numRows {0};
    int m_numCols {0};
    std::vector<std::vector<boost::variant<double, std::string, tex_gen::TexComponent>>> m_children;



};


}

#endif
