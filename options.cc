// Copyright (C) 2016, Baidu Inc.
// Author: An Qin (anqin.qin@gmail.com)
//
// Description:
//

#include "qindexdb/options.h"

namespace qindexdb {

Options::Options()
    : hash_num(10000),
      channel_num(16),
      block_num(61440),
      page_in_block_num(512),
      page_size(18 << 10),
      block_size(8 << 20),
      garbage_thread_num(5),
      file_size(8 << 20),
      arrange_schedule_period(3000),
      base_dir(".") {}

} // namespace qindexdb
