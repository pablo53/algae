#ifndef _RBTREE_H
#define _RBTREE_H


namespace algae::rbtree
{


enum RBColor { BLACK=0, RED=1 };

class RBTreeNode
{
    RBColor color;

    public:
    RBTreeNode(RBColor color);
    const RBColor& get_color() const;
};


}


#endif
