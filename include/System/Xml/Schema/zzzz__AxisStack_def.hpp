#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AxisStack)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class ActiveAxis;
}
namespace System::Xml::Schema {
class ForwardAxis;
}
// Forward declare root types
namespace System::Xml::Schema {
class AxisStack;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::AxisStack);
// Type: System.Xml.Schema::AxisStack
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::AxisStack*
class CORDL_TYPE AxisStack : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Subtree))::System::Xml::Schema::ForwardAxis* Subtree;

  /// @brief Field _parent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent))::System::Xml::Schema::ActiveAxis* _parent;

  /// @brief Field _stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stack, put = __cordl_internal_set__stack))::System::Collections::ArrayList* _stack;

  /// @brief Field _subtree, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__subtree, put = __cordl_internal_set__subtree))::System::Xml::Schema::ForwardAxis* _subtree;

  /// @brief Method Equal, addr 0x3049570, size 0x7c, virtual false, abstract: false, final false
  static inline bool Equal(::StringW thisname, ::StringW thisURN, ::StringW name, ::StringW URN);

  /// @brief Method MoveToAttribute, addr 0x3049a20, size 0x174, virtual false, abstract: false, final false
  inline bool MoveToAttribute(::StringW name, ::StringW URN, int32_t depth);

  /// @brief Method MoveToChild, addr 0x30498e0, size 0x140, virtual false, abstract: false, final false
  inline bool MoveToChild(::StringW name, ::StringW URN, int32_t depth);

  /// @brief Method MoveToParent, addr 0x3049798, size 0x148, virtual false, abstract: false, final false
  inline void MoveToParent(::StringW name, ::StringW URN, int32_t depth);

  static inline ::System::Xml::Schema::AxisStack* New_ctor(::System::Xml::Schema::ForwardAxis* faxis, ::System::Xml::Schema::ActiveAxis* parent);

  /// @brief Method Pop, addr 0x3049758, size 0x40, virtual false, abstract: false, final false
  inline void Pop();

  /// @brief Method Push, addr 0x30496c0, size 0x98, virtual false, abstract: false, final false
  inline void Push(int32_t depth);

  constexpr ::System::Xml::Schema::ActiveAxis*& __cordl_internal_get__parent();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ActiveAxis*> const& __cordl_internal_get__parent() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__stack() const;

  constexpr ::System::Xml::Schema::ForwardAxis*& __cordl_internal_get__subtree();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ForwardAxis*> const& __cordl_internal_get__subtree() const;

  constexpr void __cordl_internal_set__parent(::System::Xml::Schema::ActiveAxis* value);

  constexpr void __cordl_internal_set__stack(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__subtree(::System::Xml::Schema::ForwardAxis* value);

  /// @brief Method .ctor, addr 0x3049618, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::ForwardAxis* faxis, ::System::Xml::Schema::ActiveAxis* parent);

  /// @brief Method get_Length, addr 0x30495f4, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_Subtree, addr 0x30495ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::ForwardAxis* get_Subtree();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AxisStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AxisStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AxisStack(AxisStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AxisStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AxisStack(AxisStack const&) = delete;

  /// @brief Field _stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____stack;

  /// @brief Field _subtree, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::ForwardAxis* ____subtree;

  /// @brief Field _parent, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::ActiveAxis* ____parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::AxisStack, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::AxisStack, ____stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::AxisStack, ____subtree) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::AxisStack, ____parent) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::AxisStack);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::AxisStack*, "System.Xml.Schema", "AxisStack");
