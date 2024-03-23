#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAmazonDynamoDBStreams)
namespace Amazon::DynamoDBv2::Model {
class DescribeStreamRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeStreamResponse;
}
namespace Amazon::DynamoDBv2::Model {
class GetRecordsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class GetRecordsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class GetShardIteratorRequest;
}
namespace Amazon::DynamoDBv2::Model {
class GetShardIteratorResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ListStreamsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ListStreamsResponse;
}
namespace Amazon::Runtime {
class IAmazonService;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class IAmazonDynamoDBStreams;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::IAmazonDynamoDBStreams);
// Type: Amazon.DynamoDBv2::IAmazonDynamoDBStreams
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::IAmazonDynamoDBStreams*
class CORDL_TYPE IAmazonDynamoDBStreams {
public:
  // Declarations
  /// @brief Convert operator to "::Amazon::Runtime::IAmazonService"
  constexpr operator ::Amazon::Runtime::IAmazonService*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method DescribeStreamAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>* DescribeStreamAsync(::Amazon::DynamoDBv2::Model::DescribeStreamRequest* request,
                                                                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeStreamAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>* DescribeStreamAsync(::StringW streamArn, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRecordsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>* GetRecordsAsync(::Amazon::DynamoDBv2::Model::GetRecordsRequest* request,
                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRecordsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>* GetRecordsAsync(::StringW shardIterator, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetShardIteratorAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>* GetShardIteratorAsync(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest* request,
                                                                                                                           ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListStreamsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>* ListStreamsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListStreamsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>* ListStreamsAsync(::Amazon::DynamoDBv2::Model::ListStreamsRequest* request,
                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Convert to "::Amazon::Runtime::IAmazonService"
  constexpr ::Amazon::Runtime::IAmazonService* i___Amazon__Runtime__IAmazonService() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAmazonDynamoDBStreams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAmazonDynamoDBStreams(IAmazonDynamoDBStreams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAmazonDynamoDBStreams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAmazonDynamoDBStreams(IAmazonDynamoDBStreams const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::IAmazonDynamoDBStreams);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::IAmazonDynamoDBStreams*, "Amazon.DynamoDBv2", "IAmazonDynamoDBStreams");
