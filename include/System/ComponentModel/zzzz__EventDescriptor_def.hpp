#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventDescriptor)
namespace System::ComponentModel {
class MemberDescriptor;
}
namespace System {
class Attribute;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class EventDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::EventDescriptor);
// Type: System.ComponentModel::EventDescriptor
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::EventDescriptor*
class CORDL_TYPE EventDescriptor : public ::System::ComponentModel::MemberDescriptor {
public:
  // Declarations
  __declspec(property(get = get_ComponentType))::System::Type* ComponentType;

  __declspec(property(get = get_EventType))::System::Type* EventType;

  __declspec(property(get = get_IsMulticast)) bool IsMulticast;

  /// @brief Method AddEventHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddEventHandler(::System::Object* component, ::System::Delegate* value);

  static inline ::System::ComponentModel::EventDescriptor* New_ctor(::System::ComponentModel::MemberDescriptor* descr);

  static inline ::System::ComponentModel::EventDescriptor* New_ctor(::System::ComponentModel::MemberDescriptor* descr, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  static inline ::System::ComponentModel::EventDescriptor* New_ctor(::StringW name, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  /// @brief Method RemoveEventHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RemoveEventHandler(::System::Object* component, ::System::Delegate* value);

  /// @brief Method .ctor, addr 0x1af6ef0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::MemberDescriptor* descr);

  /// @brief Method .ctor, addr 0x1af6ef8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::MemberDescriptor* descr, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  /// @brief Method .ctor, addr 0x1af6ee8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  /// @brief Method get_ComponentType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_EventType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_EventType();

  /// @brief Method get_IsMulticast, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsMulticast();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventDescriptor(EventDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventDescriptor(EventDescriptor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::EventDescriptor, 0x60>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::EventDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EventDescriptor*, "System.ComponentModel", "EventDescriptor");
