#include <mpi.h>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

int main(int argc, char** argv) 
{
  int mpi_rc, rank;
  mpi_rc = MPI_Init(&argc, &argv);
  mpi_rc = MPI_Barrier(MPI_COMM_WORLD);
  mpi_rc = MPI_Comm_rank( MPI_COMM_WORLD, &rank );
  if ( rank == 1  ) {
    std::this_thread::sleep_for(5s);
  } else {
    std::this_thread::sleep_for(1s);
  }
  mpi_rc = MPI_Finalize();
  return 0;
}
