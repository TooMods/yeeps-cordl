#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__MarshallerContext_def.hpp"
CORDL_MODULE_EXPORT(JsonMarshallerContext)
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace ThirdParty::Json::LitJson {
class JsonWriter;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class JsonMarshallerContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::JsonMarshallerContext);
// Type: Amazon.Runtime.Internal.Transform::JsonMarshallerContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::JsonMarshallerContext*
class CORDL_TYPE JsonMarshallerContext : public ::Amazon::Runtime::Internal::Transform::MarshallerContext {
public:
  // Declarations
  __declspec(property(get = get_Writer, put = set_Writer))::ThirdParty::Json::LitJson::JsonWriter* Writer;

  /// @brief Field <Writer>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Writer_k__BackingField, put = __cordl_internal_set__Writer_k__BackingField))::ThirdParty::Json::LitJson::JsonWriter* _Writer_k__BackingField;

  static inline ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext* New_ctor(::Amazon::Runtime::Internal::IRequest* request, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  constexpr ::ThirdParty::Json::LitJson::JsonWriter*& __cordl_internal_get__Writer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::JsonWriter*> const& __cordl_internal_get__Writer_k__BackingField() const;

  constexpr void __cordl_internal_set__Writer_k__BackingField(::ThirdParty::Json::LitJson::JsonWriter* value);

  /// @brief Method .ctor, addr 0x2449580, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::IRequest* request, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method get_Writer, addr 0x2449570, size 0x8, virtual false, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::JsonWriter* get_Writer();

  /// @brief Method set_Writer, addr 0x2449578, size 0x8, virtual false, abstract: false, final false
  inline void set_Writer(::ThirdParty::Json::LitJson::JsonWriter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonMarshallerContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonMarshallerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonMarshallerContext(JsonMarshallerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonMarshallerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonMarshallerContext(JsonMarshallerContext const&) = delete;

  /// @brief Field <Writer>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ThirdParty::Json::LitJson::JsonWriter* ____Writer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::JsonMarshallerContext, ____Writer_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::JsonMarshallerContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*, "Amazon.Runtime.Internal.Transform", "JsonMarshallerContext");
