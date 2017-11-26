set terminal png size 3200,3200  font ",40" 
set xrange [-1.2:1.2]
set yrange [-1.2:1.2]
#set cbrange [0.0:1.0] 
set pm3d map
set format x ""
set format y ""
set format cb ""
set xtics nomirror
set ytics nomirror
set cbtics nomirror
set palette model HSV defined ( 0 0 1 1, 1 1 1 1 )
set output 'fractal.png'
splot 'fractal.dat'   notitle
pause -1