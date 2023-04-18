
#include <iostream>
#include <mpi.h>

int main(int argc, char** argv)
{
  std::cout << "starting!\n";
  MPI_Init(&argc, &argv);

  int rank, size;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  std::cout << "rank " << rank << " / " << size << "\n";

  MPI_Finalize();
  std::cout << "done!\n";
  return 0;
}
