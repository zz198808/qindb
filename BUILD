proto_library(
    name = 'schema_proto',
    srcs = 'schema.proto'
)

cc_library(
    name = 'qindb',
    srcs = [
        'options.cc',
        'status.cc',
        'filename.cc',
        'log_file.cc',
        'database.cc',
        'qin_cleaner.cc',
        'arranger.cc'
    ],
    deps = [
        ':schema_proto',
        '//thirdparty/glog:glog',
        '//thirdparty/leveldb:leveldb',
        '//thirdparty/leveldb-1.9.0/util:util',
        '//toft/base/string:string',
        '//toft/storage/file:file',
        '//toft/system/threading:threading',
        '//toft/storage/recordio:recordio'
    ]
)
