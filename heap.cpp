#include <bits/stdc++.h>

using namespace std;

template <class T>
T power(T x, int y);

template <class T>
void print(T *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

template <class T>
class heap
{
    T *arr;
    int max_size, size;

public:
    heap(int n)
    {
        arr = new int[n + 1];
        arr[0] = power((T)2, sizeof(T) * 8 - 1) - 1;
        max_size = n;
        size = 1;
    }
    void add(T ele)
    {
        int ind = size;
        arr[ind] = ele;
        while (ind > 0)
        {
            int x = ind / 2;
            if (arr[x] < arr[ind])
            {
                T swap = arr[x];
                arr[x] = arr[ind];
                arr[ind] = swap;
                ind = x;
            }
            else
            {
                break;
            }
        }
        size++;
    }
    T heapifyAndDelete(int in)
    {
        T x = arr[in];
        arr[in] = arr[size - 1];
        int ind = in;
        size--;
        while (2 * ind < size)
        {
            if (2 * ind == size - 1)
            {
                if (arr[size - 1] > arr[ind])
                {
                    T swap = arr[ind];
                    arr[ind] = arr[size - 1];
                    arr[size - 1] = swap;
                    ind = size - 1;
                }
                break;
            }
            if (arr[2 * ind] > arr[2 * ind + 1])
            {
                if (arr[2 * ind] > arr[ind])
                {
                    T swap = arr[2 * ind];
                    arr[2 * ind] = arr[ind];
                    arr[ind] = swap;
                    ind = 2 * ind;
                }
                else
                    break;
            }
            else
            {
                if (arr[2 * ind + 1] > arr[ind])
                {
                    T swap = arr[2 * ind + 1];
                    arr[2 * ind + 1] = arr[ind];
                    arr[ind] = swap;
                    ind = 2 * ind + 1;
                }
                else
                    break;
            }
        }
        return x;
    }
};

<template <class T, class S>
class Pair
{
public:
    int first, second;
    Pair(int f, int s)
    {
        first = f;
        second = s;
    }
};

template<class T>
class ArrayList
{
    T * arr;
    int max_size, size;

public:
    ArrayList(int n)
    {
        arr = new T[n];
        max_size = n;
        size = 0;
    }
    void push_back(T ele)
    {
        arr[i] = 
    }
    ArrayList
};

template <class T>
void removeDuplicates(T *arr, int n)
{
    vector<pair<T, int>> v;
    for (int i = 0; i < n; i++)
    {
        int z = binSearch(arr, n, arr[i]);
        v.push_back(make_pair(z - i + 1));
    }
}

int main()
{
    int n;
    cin >> n;
    int y;
    heap<int> hef(n);
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        hef.add(y);
    }
    for (int i = 0; i < n; i++)
        cout << hef.heapifyAndDelete(1) << " ";
    return 0;
}

template <class T>
T power(T x, int y)
{
    T ans = 1;
    while (y--)
        ans *= x;
    return ans;
}
