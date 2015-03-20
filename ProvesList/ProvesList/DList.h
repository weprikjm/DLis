template<typename TYPE>
struct Node
{
	TYPE data;
	Node* next;
	Node* previous;

	Node(TYPE& value)
	{
		data = value;
		next = NULL;
		previous = NULL;
	}

};



template<class TYPE>
class DList
{
private:
	Node<TYPE>* start;
	Node<TYPE>* end;

public:
	DList()
	{
		start = NULL;
		end = NULL;
	}

	TYPE getStart()
	{
	
		return start->data;
	}

	TYPE getEnd()
	{
	
		return end->data;
	
	}


	void Add(const TYPE& oneNode)
	{
		if (oneNode != NULL)
		{
			Node<TYPE>* tmpNode = new Node<TYPE>(oneNode);

			if (start != NULL) //In case there's 1 or more nodes
			{
				tmpNode->previous = end;
				end->next = tmpNode;
				end = tmpNode;
			}
			else // In case the list is empty
			{
				start = tmpNode;
				end = tmpNode;
			}

		}

	}

	bool RemoveElement(Node<TYPE>* nodeToRemove)
	{
		if (start != NULL)
		{
			
			if (nodeToRemove->next == NULL)//If it's the end
			{

				nodeToRemove->previous->next = NULL;//Previous to nodeToRemove pointing to next must point to the where nodeToRemove points
				end = nodeToRemove->previous; //'Cause we are removing end end must point to previous of NodeRemove

			}
			else if (nodeToRemove->previous == NULL)//if it's at the beginning
			{
				if (nodeToRemove->next == NULL)//If there's only one node left
				{
					start = NULL;
					end = NULL;
				}
				else//If the node is at the beginning but there's more nodes after it
				{
					nodeToRemove->next->previous = NULL;//We set null to the next node after the first that is being removed
					start = nodeToRemove->next;//Start must point to the next because we are removing the first element
				}
					

			}
			else//If it's in the middle
			{
				nodeToRemove->previous->next = nodeToRemove->next;
				nodeToRemove->next->previous = nodeToRemove->previous;
			}
		
		}
		else
		{
			return false;
		
		}

		delete nodeToRemove;//We must delete the node because it has no dependencies left
		return true;
	}

	void Clear()//No vaig tenir temps 
	{/*
		Loop to iterate through the list, start to end or end to start deleting nodes

		Also start and end must be set to null (no more nodes)

		Delete list.
		*/
	}




	~DList(){}



};