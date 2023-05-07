from setuptools import setup
import os
from glob import glob

package_name = 'jetmax_demo_3'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*launch.[pxy][yma]*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Ryan Roberts',
    maintainer_email='roberts2561@gmail.com',
    description='Demonstration 3: waits for object to enter field of grasp for robot and moves to object with active tracking and path planning.',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'state_engine = jetmax_demo_3.state_engine:main',
            'path_planner = jetmax_demo_3.path_planner:main',
            'position_service = jetmax_demo_3.position_service:main'
        ],
    },
)
