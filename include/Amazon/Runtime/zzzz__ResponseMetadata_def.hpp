#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResponseMetadata)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Amazon::Runtime {
class ResponseMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ResponseMetadata);
// Type: Amazon.Runtime::ResponseMetadata
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ResponseMetadata*
class CORDL_TYPE ResponseMetadata : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Metadata))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Metadata;

  __declspec(property(get = get_RequestId, put = set_RequestId))::StringW RequestId;

  /// @brief Field _metadata, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__metadata, put = __cordl_internal_set__metadata))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _metadata;

  /// @brief Field requestIdField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_requestIdField, put = __cordl_internal_set_requestIdField))::StringW requestIdField;

  static inline ::Amazon::Runtime::ResponseMetadata* New_ctor();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__metadata();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__metadata() const;

  constexpr ::StringW const& __cordl_internal_get_requestIdField() const;

  constexpr ::StringW& __cordl_internal_get_requestIdField();

  constexpr void __cordl_internal_set__metadata(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_requestIdField(::StringW value);

  /// @brief Method .ctor, addr 0x2021134, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Metadata, addr 0x20210b4, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Metadata();

  /// @brief Method get_RequestId, addr 0x20210a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RequestId();

  /// @brief Method set_RequestId, addr 0x20210ac, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseMetadata();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponseMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseMetadata(ResponseMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseMetadata(ResponseMetadata const&) = delete;

  /// @brief Field requestIdField, offset: 0x10, size: 0x8, def value: None
  ::StringW ___requestIdField;

  /// @brief Field _metadata, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____metadata;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ResponseMetadata, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::ResponseMetadata, ___requestIdField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ResponseMetadata, ____metadata) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ResponseMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ResponseMetadata*, "Amazon.Runtime", "ResponseMetadata");
