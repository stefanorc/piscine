echo $FT_NBR1 + $FT_NBR2 | sed "s_\'_0_g" | tr '\' '1' | sed "s_\"_2_g" | sed "s_\?_3_g" | sed "s_\!_4_g" | tr 'mrdoc' '01234' | xargs echo 'obase=13;ibase=5;' | bc | tr '0123456789ABC' 'gtaio luSnemf'

