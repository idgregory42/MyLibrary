#if !defined (NULL)
#define NULL 0
#endif


#if !defined (SORTNUMS_H)
#define SORTNUMS_H

#include <iostream>
using namespace std;

#include "ListArrayIterator.h"
#include "ListArray.h"
#include "Integer.h"
using namespace MyLibrary;

namespace MyLibrary
{
class SortNums
{
	private:
	
		ListArray<Integer>* list;
		void quickSort(int low, int high);
		void swap(int i, int j);
		
	public:
		
		SortNums(ListArray<Integer>* list);
		~SortNums();
		void sort();
		void displayList();
	
};

SortNums::SortNums(ListArray<Integer>* list)
{
	this->list = list;
}

SortNums::~SortNums()
{
	
}

void SortNums::quickSort(int low, int high)
{
	int i = low;
	int j = high;
	
	int pivot = list->get(low + (high - low)/2)->getValue();

	while(i <= j)
	{
		
		/*
		while(list->get(i)->getValue() < pivot)
		{
			cout << "here" << endl;
			i++;
		}
		while(list->get(j)->getValue() > pivot)
		{
			
			j--;
		}
		if(i <= j)
		{
			
			swap(i, j);
			i++;
			j--;
		}
		*/
	}
	
	if(low < j) quickSort(low, j);
	if(i < high) quickSort(i, high);	
	
}

void SortNums::swap(int i, int j)
{
	//cout << "here" << endl;	
	Integer* temp = list->get(i);
	list->set(i, list->get(j));
	list->set(j, temp);
}

void SortNums::sort()
{
	quickSort(0, list->size() - 1);
}

void SortNums::displayList()
{
	ListArrayIterator<Integer>* iter = list->iterator();
	while(iter->hasNext())
	{
		cout << iter->next()->getValue() << endl;
	}
}

}
#endif