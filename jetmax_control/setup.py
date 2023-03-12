from setuptools import setup

package_name = 'jetmax_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Capstone Group',
    maintainer_email='roberyan@oregonstate.edu',
    description='Basic interfaces for controlling hiwonder robot',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'controller = jetmax_control.controller:main',
            'demo2 = jetmax_control.demo2:main'
        ],
    },
)
