#include "rbtree.h"

namespace algae::rbtree
{


RBTreeNode::RBTreeNode(RBColor color) : color(color)
{
}

const RBColor& RBTreeNode::get_color() const
{
    return color;
}

}
