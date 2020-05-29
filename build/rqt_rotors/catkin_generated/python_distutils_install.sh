#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/joeyyu/catkin_ws_eth_sim/src/rotors_simulator-master/rqt_rotors"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/joeyyu/catkin_ws_eth_sim/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/joeyyu/catkin_ws_eth_sim/install/lib/python2.7/dist-packages:/home/joeyyu/catkin_ws_eth_sim/build/rqt_rotors/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/joeyyu/catkin_ws_eth_sim/build/rqt_rotors" \
    "/usr/bin/python2" \
    "/home/joeyyu/catkin_ws_eth_sim/src/rotors_simulator-master/rqt_rotors/setup.py" \
    build --build-base "/home/joeyyu/catkin_ws_eth_sim/build/rqt_rotors" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/joeyyu/catkin_ws_eth_sim/install" --install-scripts="/home/joeyyu/catkin_ws_eth_sim/install/bin"
