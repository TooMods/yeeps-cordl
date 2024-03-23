#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetRecordsResponse)
namespace Amazon::DynamoDBv2::Model {
class Record;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GetRecordsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GetRecordsResponse);
// Type: Amazon.DynamoDBv2.Model::GetRecordsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GetRecordsResponse*
class CORDL_TYPE GetRecordsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_NextShardIterator, put = set_NextShardIterator))::StringW NextShardIterator;

  __declspec(property(get = get_Records, put = set_Records))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>* Records;

  /// @brief Field _nextShardIterator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nextShardIterator, put = __cordl_internal_set__nextShardIterator))::StringW _nextShardIterator;

  /// @brief Field _records, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__records, put = __cordl_internal_set__records))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>* _records;

  /// @brief Method IsSetNextShardIterator, addr 0x1048eec, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextShardIterator();

  /// @brief Method IsSetRecords, addr 0x1048f0c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetRecords();

  static inline ::Amazon::DynamoDBv2::Model::GetRecordsResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__nextShardIterator() const;

  constexpr ::StringW& __cordl_internal_get__nextShardIterator();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>*& __cordl_internal_get__records();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>*> const& __cordl_internal_get__records() const;

  constexpr void __cordl_internal_set__nextShardIterator(::StringW value);

  constexpr void __cordl_internal_set__records(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>* value);

  /// @brief Method .ctor, addr 0x1048f60, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_NextShardIterator, addr 0x1048edc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextShardIterator();

  /// @brief Method get_Records, addr 0x1048efc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>* get_Records();

  /// @brief Method set_NextShardIterator, addr 0x1048ee4, size 0x8, virtual false, abstract: false, final false
  inline void set_NextShardIterator(::StringW value);

  /// @brief Method set_Records, addr 0x1048f04, size 0x8, virtual false, abstract: false, final false
  inline void set_Records(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetRecordsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetRecordsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetRecordsResponse(GetRecordsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetRecordsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetRecordsResponse(GetRecordsResponse const&) = delete;

  /// @brief Field _nextShardIterator, offset: 0x28, size: 0x8, def value: None
  ::StringW ____nextShardIterator;

  /// @brief Field _records, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Record*>* ____records;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GetRecordsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetRecordsResponse, ____nextShardIterator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetRecordsResponse, ____records) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GetRecordsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GetRecordsResponse*, "Amazon.DynamoDBv2.Model", "GetRecordsResponse");
