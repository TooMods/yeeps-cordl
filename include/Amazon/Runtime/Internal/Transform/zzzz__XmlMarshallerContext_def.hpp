#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__MarshallerContext_def.hpp"
CORDL_MODULE_EXPORT(XmlMarshallerContext)
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class XmlMarshallerContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::XmlMarshallerContext);
// Type: Amazon.Runtime.Internal.Transform::XmlMarshallerContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::XmlMarshallerContext*
class CORDL_TYPE XmlMarshallerContext : public ::Amazon::Runtime::Internal::Transform::MarshallerContext {
public:
  // Declarations
  __declspec(property(get = get_Writer, put = set_Writer))::System::Xml::XmlWriter* Writer;

  /// @brief Field <Writer>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Writer_k__BackingField, put = __cordl_internal_set__Writer_k__BackingField))::System::Xml::XmlWriter* _Writer_k__BackingField;

  static inline ::Amazon::Runtime::Internal::Transform::XmlMarshallerContext* New_ctor(::Amazon::Runtime::Internal::IRequest* request, ::System::Xml::XmlWriter* writer);

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get__Writer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWriter*> const& __cordl_internal_get__Writer_k__BackingField() const;

  constexpr void __cordl_internal_set__Writer_k__BackingField(::System::Xml::XmlWriter* value);

  /// @brief Method .ctor, addr 0x2449544, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::IRequest* request, ::System::Xml::XmlWriter* writer);

  /// @brief Method get_Writer, addr 0x2449534, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlWriter* get_Writer();

  /// @brief Method set_Writer, addr 0x244953c, size 0x8, virtual false, abstract: false, final false
  inline void set_Writer(::System::Xml::XmlWriter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlMarshallerContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlMarshallerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlMarshallerContext(XmlMarshallerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlMarshallerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlMarshallerContext(XmlMarshallerContext const&) = delete;

  /// @brief Field <Writer>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ____Writer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::XmlMarshallerContext, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlMarshallerContext, ____Writer_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::XmlMarshallerContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::XmlMarshallerContext*, "Amazon.Runtime.Internal.Transform", "XmlMarshallerContext");
