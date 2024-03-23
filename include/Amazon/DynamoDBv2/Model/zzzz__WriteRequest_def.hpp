#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WriteRequest)
namespace Amazon::DynamoDBv2::Model {
class DeleteRequest;
}
namespace Amazon::DynamoDBv2::Model {
class PutRequest;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class WriteRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::WriteRequest);
// Type: Amazon.DynamoDBv2.Model::WriteRequest
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::WriteRequest*
class CORDL_TYPE WriteRequest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DeleteRequest, put = set_DeleteRequest))::Amazon::DynamoDBv2::Model::DeleteRequest* DeleteRequest;

  __declspec(property(get = get_PutRequest, put = set_PutRequest))::Amazon::DynamoDBv2::Model::PutRequest* PutRequest;

  /// @brief Field _deleteRequest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__deleteRequest, put = __cordl_internal_set__deleteRequest))::Amazon::DynamoDBv2::Model::DeleteRequest* _deleteRequest;

  /// @brief Field _putRequest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__putRequest, put = __cordl_internal_set__putRequest))::Amazon::DynamoDBv2::Model::PutRequest* _putRequest;

  /// @brief Method IsSetDeleteRequest, addr 0x1055914, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDeleteRequest();

  /// @brief Method IsSetPutRequest, addr 0x1055934, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetPutRequest();

  static inline ::Amazon::DynamoDBv2::Model::WriteRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::WriteRequest* New_ctor(::Amazon::DynamoDBv2::Model::DeleteRequest* deleteRequest);

  static inline ::Amazon::DynamoDBv2::Model::WriteRequest* New_ctor(::Amazon::DynamoDBv2::Model::PutRequest* putRequest);

  constexpr ::Amazon::DynamoDBv2::Model::DeleteRequest*& __cordl_internal_get__deleteRequest();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::DeleteRequest*> const& __cordl_internal_get__deleteRequest() const;

  constexpr ::Amazon::DynamoDBv2::Model::PutRequest*& __cordl_internal_get__putRequest();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::PutRequest*> const& __cordl_internal_get__putRequest() const;

  constexpr void __cordl_internal_set__deleteRequest(::Amazon::DynamoDBv2::Model::DeleteRequest* value);

  constexpr void __cordl_internal_set__putRequest(::Amazon::DynamoDBv2::Model::PutRequest* value);

  /// @brief Method .ctor, addr 0x10558ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x10558dc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::Model::DeleteRequest* deleteRequest);

  /// @brief Method .ctor, addr 0x10558b4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::Model::PutRequest* putRequest);

  /// @brief Method get_DeleteRequest, addr 0x1055904, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DeleteRequest* get_DeleteRequest();

  /// @brief Method get_PutRequest, addr 0x1055924, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::PutRequest* get_PutRequest();

  /// @brief Method set_DeleteRequest, addr 0x105590c, size 0x8, virtual false, abstract: false, final false
  inline void set_DeleteRequest(::Amazon::DynamoDBv2::Model::DeleteRequest* value);

  /// @brief Method set_PutRequest, addr 0x105592c, size 0x8, virtual false, abstract: false, final false
  inline void set_PutRequest(::Amazon::DynamoDBv2::Model::PutRequest* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WriteRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WriteRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WriteRequest(WriteRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WriteRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WriteRequest(WriteRequest const&) = delete;

  /// @brief Field _deleteRequest, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::DeleteRequest* ____deleteRequest;

  /// @brief Field _putRequest, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::PutRequest* ____putRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::WriteRequest, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::WriteRequest, ____deleteRequest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::WriteRequest, ____putRequest) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::WriteRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::WriteRequest*, "Amazon.DynamoDBv2.Model", "WriteRequest");
