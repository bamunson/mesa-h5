            integer function how_many_extra_profile_columns(id)
               integer, intent(in) :: id
            end function how_many_extra_profile_columns      
      
            subroutine data_for_extra_profile_columns( &
                  id, n, nz, names, vals, ierr)
               use const_def, only: dp
               use star_def, only: maxlen_profile_column_name
               integer, intent(in) :: id, n, nz
               character (len=maxlen_profile_column_name) :: names(n)
               real(dp) :: vals(nz,n)
               integer, intent(out) :: ierr
            end subroutine data_for_extra_profile_columns
