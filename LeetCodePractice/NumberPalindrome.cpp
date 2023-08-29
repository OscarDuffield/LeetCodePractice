#include <iostream>
using std::cout;
using std::cin;


struct TreeNode
{
	int data;
	TreeNode* next;
	
	//Functions
	TreeNode* MakeNode(int d)
	{
		TreeNode* newNode;
		newNode = new TreeNode();
		newNode->data = d;
		newNode->next = nullptr;
		return newNode;
	}

	TreeNode* InsertFirst(TreeNode** head, int d)
	{
		TreeNode* newNode = new TreeNode;
		newNode->data = d;
		newNode->next = *head;
		*head = newNode;

		return newNode;
	}
	
	void InsertAfter(TreeNode* p, TreeNode* newNode)
	{
		newNode->next = p->next;
		p->next = newNode;
	}

	void SetNode(TreeNode* n, int data)
	{
		n->data = data;
	}

	TreeNode* GetNode(TreeNode* p, int pos)
	{
		int count = 0;
		while (p != nullptr)
		{
			if (count == pos)
			{
				return p;
			}
			count++;
			p = p->next;
		}
		return nullptr;
	}

	TreeNode* Find(TreeNode* p, int val)
	{
		while (p != nullptr)
		{
			if (p->data == val)
			{
				return p;
			}
			p = p->next;
		}
		return nullptr;
	}

	void PrintList(TreeNode* head)
	{
		while(head != nullptr)
		{
			cout << "     " << "| " << head->data << " |-->";
			head = head->next;
		}
	}
	
	void DeleteList(TreeNode* p)
	{
		TreeNode* pTemp;
		while (p != nullptr)
		{
			pTemp = p;
			p = p->next;
			delete pTemp;
		}
	}

	void DeleteAfter(TreeNode* p)
	{
		TreeNode* pTemp;
		if (p != nullptr && p->next != nullptr)
		{
			pTemp = p->next;
			p->next = pTemp->next;
			delete pTemp;
		}
	}
	
};




void StartLinkedListPalindrome()
{
	int DesiredLength;

}