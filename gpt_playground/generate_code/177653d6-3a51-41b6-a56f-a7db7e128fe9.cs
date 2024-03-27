using System;

public class MergeSortProgram
{
    static void Main(string[] args)
    {
        int[] inputArray = { 5, 3, 8, 4, 2, 7, 1, 6 };
        Console.WriteLine("Original Array:");
        PrintArray(inputArray);

        MergeSort(inputArray, 0, inputArray.Length - 1);

        Console.WriteLine("Sorted Array:");
        PrintArray(inputArray);
    }

    static void MergeSort(int[] array, int left, int right)
    {
        if (left < right)
        {
            int middle = left + (right - left) / 2;

            MergeSort(array, left, middle);
            MergeSort(array, middle + 1, right);

            Merge(array, left, middle, right);
        }
    }

    static void Merge(int[] array, int left, int middle, int right)
    {
        int n1 = middle - left + 1;
        int n2 = right - middle;

        int[] L = new int[n1];
        int[] R = new int[n2];

        Array.Copy(array, left, L, 0, n1);
        Array.Copy(array, middle + 1, R, 0, n2);

        int i = 0, j = 0;
        int k = left;
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                array[k] = L[i];
                i++;
            }
            else
            {
                array[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1)
        {
            array[k] = L[i];
            i++;
            k++;
        }

        while (j < n2)
        {
            array[k] = R[j];
            j++;
            k++;
        }
    }

    static void PrintArray(int[] array)
    {
        foreach (int item in array)
        {
            Console.Write(item + " ");
        }
        Console.WriteLine();
    }
}