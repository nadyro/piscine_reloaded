ifconfig | grep ether | sed "s/ether //" | sed "s/ //" | cut -c2-
