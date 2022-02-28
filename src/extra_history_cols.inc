            integer function how_many_extra_history_columns(id)
               integer, intent(in) :: id
            end function how_many_extra_history_columns
            
            subroutine data_for_extra_history_columns( &
                  id, n, names, vals, ierr)
               use const_def, only: dp
               use star_def, only: maxlen_history_column_name
               integer, intent(in) :: id, n
               character (len=maxlen_history_column_name) :: names(n)
               real(dp) :: vals(n)
               integer, intent(out) :: ierr
            end subroutine data_for_extra_history_columns
