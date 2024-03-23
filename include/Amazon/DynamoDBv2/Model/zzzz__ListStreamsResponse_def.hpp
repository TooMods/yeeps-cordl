#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListStreamsResponse)
namespace Amazon::DynamoDBv2::Model {
class StreamSummary;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListStreamsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListStreamsResponse);
// Type: Amazon.DynamoDBv2.Model::ListStreamsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListStreamsResponse*
class CORDL_TYPE ListStreamsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_LastEvaluatedStreamArn, put = set_LastEvaluatedStreamArn))::StringW LastEvaluatedStreamArn;

  __declspec(property(get = get_Streams, put = set_Streams))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>* Streams;

  /// @brief Field _lastEvaluatedStreamArn, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lastEvaluatedStreamArn, put = __cordl_internal_set__lastEvaluatedStreamArn))::StringW _lastEvaluatedStreamArn;

  /// @brief Field _streams, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__streams, put = __cordl_internal_set__streams))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>* _streams;

  /// @brief Method IsSetLastEvaluatedStreamArn, addr 0x104b21c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLastEvaluatedStreamArn();

  /// @brief Method IsSetStreams, addr 0x104b23c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetStreams();

  static inline ::Amazon::DynamoDBv2::Model::ListStreamsResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__lastEvaluatedStreamArn() const;

  constexpr ::StringW& __cordl_internal_get__lastEvaluatedStreamArn();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>*& __cordl_internal_get__streams();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>*> const& __cordl_internal_get__streams() const;

  constexpr void __cordl_internal_set__lastEvaluatedStreamArn(::StringW value);

  constexpr void __cordl_internal_set__streams(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>* value);

  /// @brief Method .ctor, addr 0x104b290, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LastEvaluatedStreamArn, addr 0x104b20c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastEvaluatedStreamArn();

  /// @brief Method get_Streams, addr 0x104b22c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>* get_Streams();

  /// @brief Method set_LastEvaluatedStreamArn, addr 0x104b214, size 0x8, virtual false, abstract: false, final false
  inline void set_LastEvaluatedStreamArn(::StringW value);

  /// @brief Method set_Streams, addr 0x104b234, size 0x8, virtual false, abstract: false, final false
  inline void set_Streams(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListStreamsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListStreamsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListStreamsResponse(ListStreamsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListStreamsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListStreamsResponse(ListStreamsResponse const&) = delete;

  /// @brief Field _lastEvaluatedStreamArn, offset: 0x28, size: 0x8, def value: None
  ::StringW ____lastEvaluatedStreamArn;

  /// @brief Field _streams, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>* ____streams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListStreamsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListStreamsResponse, ____lastEvaluatedStreamArn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListStreamsResponse, ____streams) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListStreamsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListStreamsResponse*, "Amazon.DynamoDBv2.Model", "ListStreamsResponse");
