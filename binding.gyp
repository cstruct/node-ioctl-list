{
    'targets': [
        {
            'target_name': 'ioctl-list',
            'sources': [ 'src/ioctl-list.cpp' ],
            'include_dirs': [
                '<!(node -e "require(\'nan\')")'
            ]
        }
    ]
}
