set terminal png size 6000,2800  font ",40" 
set xrange [-5.2:5.2]
set yrange [-0.8:0.8]
set cbrange [0.0:1.0] 
set pm3d map
set format x ""
set format y ""
set format cb ""
set xtics nomirror
set ytics nomirror
set cbtics nomirror
set palette rgbformulae 15,36,17
set output 'fractal.png'
splot 'fractal.dat'   notitle
pause -1
