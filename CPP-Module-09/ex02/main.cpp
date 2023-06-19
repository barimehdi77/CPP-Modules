

#include "./PmergeMe.hpp"

int main(int ac, char **av)
{

	PmergeMe pMergeMe;
	if (ac < 2) {
		std::cout << "Error: arg error" << std::endl;
		exit(1);
	}


	pMergeMe.parseArgs(av);

	// int list1[10] = {1, 2, 3, 25, 40, 55, 77, 88, 90, 99};
	// int list2[10] = {4, 5, 6, 10, 20, 35, 47, 78, 80, 87};
	// int list3[20];
	// int i = 0;
	// int j = 0;
	// int k = 0;

	// while (i < 10 && j < 10)
	// {
	// 	std::cout << "i: " << i << " j: " << j << std::endl;
	// 	if (list1[i] < list2[j])
	// 	{
	// 		list3[k++] = list1[i++];
	// 	}
	// 	else
	// 	{
	// 		list3[k++] = list2[j++];
	// 	}
	// }
	// while (i < 10)
	// {
	// 	list3[k++] = list1[i++];
	// }
	// while (j < 10)
	// {
	// 	list3[k++] = list2[j++];
	// }

	// int t = 0;
	// while (t < i + j)
	// {
	// 	std::cout << list3[t++] << " ";
	// }

	// std::cout << std::endl;
}
