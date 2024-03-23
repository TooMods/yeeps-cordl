#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUI)
namespace GlobalNamespace {
class __DebugUI__EnumField____c;
}
namespace GlobalNamespace {
class __DebugUI__EnumUtility____c;
}
namespace GlobalNamespace {
struct __DebugUI__Foldout__ContextMenuItem;
}
namespace GlobalNamespace {
struct __DebugUI__MessageBox__Style;
}
namespace GlobalNamespace {
class __DebugUI__Panel____c;
}
namespace GlobalNamespace {
class __DebugUI__Table__Row;
}
namespace GlobalNamespace {
struct __DebugUI__Widget__NameAndTooltip;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
template <typename T> class ListChangedEventArgs_1;
}
namespace UnityEngine::Rendering {
template <typename T> class ObservableList_1;
}
namespace UnityEngine::Rendering {
class __DebugUI__BitField;
}
namespace UnityEngine::Rendering {
class __DebugUI__BoolField;
}
namespace UnityEngine::Rendering {
class __DebugUI__Button;
}
namespace UnityEngine::Rendering {
class __DebugUI__ColorField;
}
namespace UnityEngine::Rendering {
class __DebugUI__Container;
}
namespace UnityEngine::Rendering {
class __DebugUI__EnumField;
}
namespace UnityEngine::Rendering {
class __DebugUI__EnumUtility;
}
namespace UnityEngine::Rendering {
template <typename T> class __DebugUI__Field_1;
}
namespace UnityEngine::Rendering {
struct __DebugUI__Flags;
}
namespace UnityEngine::Rendering {
class __DebugUI__FloatField;
}
namespace UnityEngine::Rendering {
class __DebugUI__Foldout;
}
namespace UnityEngine::Rendering {
class __DebugUI__HBox;
}
namespace UnityEngine::Rendering {
class __DebugUI__HistoryBoolField;
}
namespace UnityEngine::Rendering {
class __DebugUI__HistoryEnumField;
}
namespace UnityEngine::Rendering {
class __DebugUI__IContainer;
}
namespace UnityEngine::Rendering {
class __DebugUI__IValueField;
}
namespace UnityEngine::Rendering {
class __DebugUI__IntField;
}
namespace UnityEngine::Rendering {
class __DebugUI__MessageBox;
}
namespace UnityEngine::Rendering {
class __DebugUI__Panel;
}
namespace UnityEngine::Rendering {
class __DebugUI__Table;
}
namespace UnityEngine::Rendering {
class __DebugUI__UIntField;
}
namespace UnityEngine::Rendering {
class __DebugUI__VBox;
}
namespace UnityEngine::Rendering {
class __DebugUI__Value;
}
namespace UnityEngine::Rendering {
class __DebugUI__Vector2Field;
}
namespace UnityEngine::Rendering {
class __DebugUI__Vector3Field;
}
namespace UnityEngine::Rendering {
class __DebugUI__Vector4Field;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GUIContent;
}
// Forward declare root types
namespace GlobalNamespace {
struct __DebugUI__MessageBox__Style;
}
namespace UnityEngine::Rendering {
struct __DebugUI__Flags;
}
namespace GlobalNamespace {
class __DebugUI__EnumField____c;
}
namespace GlobalNamespace {
class __DebugUI__EnumUtility____c;
}
namespace GlobalNamespace {
class __DebugUI__Panel____c;
}
namespace GlobalNamespace {
class __DebugUI__Table__Row;
}
namespace UnityEngine::Rendering {
class DebugUI;
}
namespace UnityEngine::Rendering {
class __DebugUI__BitField;
}
namespace UnityEngine::Rendering {
class __DebugUI__BoolField;
}
namespace UnityEngine::Rendering {
class __DebugUI__Button;
}
namespace UnityEngine::Rendering {
class __DebugUI__ColorField;
}
namespace UnityEngine::Rendering {
class __DebugUI__Container;
}
namespace UnityEngine::Rendering {
class __DebugUI__EnumField;
}
namespace UnityEngine::Rendering {
class __DebugUI__EnumUtility;
}
namespace UnityEngine::Rendering {
template <typename T> class __DebugUI__Field_1;
}
namespace UnityEngine::Rendering {
class __DebugUI__FloatField;
}
namespace UnityEngine::Rendering {
class __DebugUI__Foldout;
}
namespace UnityEngine::Rendering {
class __DebugUI__HBox;
}
namespace UnityEngine::Rendering {
class __DebugUI__HistoryBoolField;
}
namespace UnityEngine::Rendering {
class __DebugUI__HistoryEnumField;
}
namespace UnityEngine::Rendering {
class __DebugUI__IContainer;
}
namespace UnityEngine::Rendering {
class __DebugUI__IValueField;
}
namespace UnityEngine::Rendering {
class __DebugUI__IntField;
}
namespace UnityEngine::Rendering {
class __DebugUI__MessageBox;
}
namespace UnityEngine::Rendering {
class __DebugUI__Panel;
}
namespace UnityEngine::Rendering {
class __DebugUI__Table;
}
namespace UnityEngine::Rendering {
class __DebugUI__UIntField;
}
namespace UnityEngine::Rendering {
class __DebugUI__VBox;
}
namespace UnityEngine::Rendering {
class __DebugUI__Value;
}
namespace UnityEngine::Rendering {
class __DebugUI__Vector2Field;
}
namespace UnityEngine::Rendering {
class __DebugUI__Vector3Field;
}
namespace UnityEngine::Rendering {
class __DebugUI__Vector4Field;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace GlobalNamespace {
struct __DebugUI__Foldout__ContextMenuItem;
}
namespace GlobalNamespace {
struct __DebugUI__Widget__NameAndTooltip;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__DebugUI__MessageBox__Style);
MARK_VAL_T(::UnityEngine::Rendering::__DebugUI__Flags);
MARK_REF_PTR_T(::GlobalNamespace::__DebugUI__EnumField____c);
MARK_REF_PTR_T(::GlobalNamespace::__DebugUI__EnumUtility____c);
MARK_REF_PTR_T(::GlobalNamespace::__DebugUI__Panel____c);
MARK_REF_PTR_T(::GlobalNamespace::__DebugUI__Table__Row);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__BitField);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__BoolField);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__Button);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__ColorField);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__Container);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__EnumField);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__EnumUtility);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__Field_1);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__FloatField);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__Foldout);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__HBox);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__HistoryBoolField);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__HistoryEnumField);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__IContainer);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__IValueField);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__IntField);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__MessageBox);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__Panel);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__Table);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__UIntField);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__VBox);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__Value);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__Vector2Field);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__Vector3Field);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__Vector4Field);
MARK_REF_PTR_T(::UnityEngine::Rendering::__DebugUI__Widget);
MARK_VAL_T(::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem);
MARK_VAL_T(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip);
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::DebugUI::Flags
struct CORDL_TYPE __DebugUI__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DebugUI__Flags_Unwrapped
  enum struct ____DebugUI__Flags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_EditorOnly = static_cast<int32_t>(0x2),
    __E_RuntimeOnly = static_cast<int32_t>(0x4),
    __E_EditorForceUpdate = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DebugUI__Flags_Unwrapped() const noexcept {
    return static_cast<____DebugUI__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DebugUI__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field EditorForceUpdate value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::__DebugUI__Flags const EditorForceUpdate;

  /// @brief Field EditorOnly value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::__DebugUI__Flags const EditorOnly;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::__DebugUI__Flags const None;

  /// @brief Field RuntimeOnly value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::__DebugUI__Flags const RuntimeOnly;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::Widget
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::Widget*
class CORDL_TYPE __DebugUI__Widget : public ::System::Object {
public:
  // Declarations
  using NameAndTooltip = ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip;

  /// @brief Field <displayName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField))::StringW _displayName_k__BackingField;

  /// @brief Field <flags>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__flags_k__BackingField, put = __cordl_internal_set__flags_k__BackingField))::UnityEngine::Rendering::__DebugUI__Flags _flags_k__BackingField;

  /// @brief Field <queryPath>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__queryPath_k__BackingField, put = __cordl_internal_set__queryPath_k__BackingField))::StringW _queryPath_k__BackingField;

  /// @brief Field <tooltip>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tooltip_k__BackingField, put = __cordl_internal_set__tooltip_k__BackingField))::StringW _tooltip_k__BackingField;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_flags, put = set_flags))::UnityEngine::Rendering::__DebugUI__Flags flags;

  __declspec(property(get = get_isEditorOnly)) bool isEditorOnly;

  __declspec(property(get = get_isHidden)) bool isHidden;

  /// @brief Field isHiddenCallback, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_isHiddenCallback, put = __cordl_internal_set_isHiddenCallback))::System::Func_1<bool>* isHiddenCallback;

  __declspec(property(get = get_isInactiveInEditor)) bool isInactiveInEditor;

  __declspec(property(get = get_isRuntimeOnly)) bool isRuntimeOnly;

  /// @brief Field m_Panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel))::UnityEngine::Rendering::__DebugUI__Panel* m_Panel;

  /// @brief Field m_Parent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Parent, put = __cordl_internal_set_m_Parent))::UnityEngine::Rendering::__DebugUI__IContainer* m_Parent;

  __declspec(property(put = set_nameAndTooltip))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip nameAndTooltip;

  __declspec(property(get = get_panel, put = set_panel))::UnityEngine::Rendering::__DebugUI__Panel* panel;

  __declspec(property(get = get_parent, put = set_parent))::UnityEngine::Rendering::__DebugUI__IContainer* parent;

  __declspec(property(get = get_queryPath, put = set_queryPath))::StringW queryPath;

  __declspec(property(get = get_tooltip, put = set_tooltip))::StringW tooltip;

  /// @brief Method GenerateQueryPath, addr 0x1bd8194, size 0xe4, virtual true, abstract: false, final false
  inline void GenerateQueryPath();

  /// @brief Method GetHashCode, addr 0x1bd8c54, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::__DebugUI__Widget* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr ::UnityEngine::Rendering::__DebugUI__Flags const& __cordl_internal_get__flags_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::__DebugUI__Flags& __cordl_internal_get__flags_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__queryPath_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__queryPath_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__tooltip_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__tooltip_k__BackingField();

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_isHiddenCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& __cordl_internal_get_isHiddenCallback() const;

  constexpr ::UnityEngine::Rendering::__DebugUI__Panel*& __cordl_internal_get_m_Panel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__Panel*> const& __cordl_internal_get_m_Panel() const;

  constexpr ::UnityEngine::Rendering::__DebugUI__IContainer*& __cordl_internal_get_m_Parent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__IContainer*> const& __cordl_internal_get_m_Parent() const;

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__flags_k__BackingField(::UnityEngine::Rendering::__DebugUI__Flags value);

  constexpr void __cordl_internal_set__queryPath_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__tooltip_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_isHiddenCallback(::System::Func_1<bool>* value);

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::Rendering::__DebugUI__Panel* value);

  constexpr void __cordl_internal_set_m_Parent(::UnityEngine::Rendering::__DebugUI__IContainer* value);

  /// @brief Method .ctor, addr 0x1bd7e04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_displayName, addr 0x1bd8bc0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_displayName();

  /// @brief Method get_flags, addr 0x1bd8bb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::__DebugUI__Flags get_flags();

  /// @brief Method get_isEditorOnly, addr 0x1bd8bf0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isEditorOnly();

  /// @brief Method get_isHidden, addr 0x1bd8c34, size 0x20, virtual false, abstract: false, final false
  inline bool get_isHidden();

  /// @brief Method get_isInactiveInEditor, addr 0x1bd8c08, size 0x2c, virtual false, abstract: false, final false
  inline bool get_isInactiveInEditor();

  /// @brief Method get_isRuntimeOnly, addr 0x1bd8bfc, size 0xc, virtual false, abstract: false, final false
  inline bool get_isRuntimeOnly();

  /// @brief Method get_panel, addr 0x1bd8b90, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::__DebugUI__Panel* get_panel();

  /// @brief Method get_parent, addr 0x1bd8ba0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::__DebugUI__IContainer* get_parent();

  /// @brief Method get_queryPath, addr 0x1bd8be0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_queryPath();

  /// @brief Method get_tooltip, addr 0x1bd8bd0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_tooltip();

  /// @brief Method set_displayName, addr 0x1bd8bc8, size 0x8, virtual true, abstract: false, final true
  inline void set_displayName(::StringW value);

  /// @brief Method set_flags, addr 0x1bd8bb8, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::UnityEngine::Rendering::__DebugUI__Flags value);

  /// @brief Method set_nameAndTooltip, addr 0x1bd8c74, size 0x8, virtual false, abstract: false, final false
  inline void set_nameAndTooltip(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  /// @brief Method set_panel, addr 0x1bd8b98, size 0x8, virtual true, abstract: false, final false
  inline void set_panel(::UnityEngine::Rendering::__DebugUI__Panel* value);

  /// @brief Method set_parent, addr 0x1bd8ba8, size 0x8, virtual true, abstract: false, final false
  inline void set_parent(::UnityEngine::Rendering::__DebugUI__IContainer* value);

  /// @brief Method set_queryPath, addr 0x1bd8be8, size 0x8, virtual false, abstract: false, final false
  inline void set_queryPath(::StringW value);

  /// @brief Method set_tooltip, addr 0x1bd8bd8, size 0x8, virtual false, abstract: false, final false
  inline void set_tooltip(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Widget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Widget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Widget(__DebugUI__Widget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Widget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Widget(__DebugUI__Widget const&) = delete;

  /// @brief Field m_Panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::__DebugUI__Panel* ___m_Panel;

  /// @brief Field m_Parent, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::__DebugUI__IContainer* ___m_Parent;

  /// @brief Field <flags>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::__DebugUI__Flags ____flags_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <tooltip>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____tooltip_k__BackingField;

  /// @brief Field <queryPath>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____queryPath_k__BackingField;

  /// @brief Field isHiddenCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Func_1<bool>* ___isHiddenCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__Widget, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Widget, ___m_Panel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Widget, ___m_Parent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Widget, ____flags_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Widget, ____displayName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Widget, ____tooltip_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Widget, ____queryPath_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Widget, ___isHiddenCallback) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::Container
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::Container*
class CORDL_TYPE __DebugUI__Container : public ::UnityEngine::Rendering::__DebugUI__Widget {
public:
  // Declarations
  /// @brief Field <children>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__children_k__BackingField,
                      put = __cordl_internal_set__children_k__BackingField))::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* _children_k__BackingField;

  __declspec(property(get = get_children, put = set_children))::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* children;

  __declspec(property(get = get_panel, put = set_panel))::UnityEngine::Rendering::__DebugUI__Panel* panel;

  /// @brief Convert operator to "::UnityEngine::Rendering::__DebugUI__IContainer"
  constexpr operator ::UnityEngine::Rendering::__DebugUI__IContainer*() noexcept;

  /// @brief Method GenerateQueryPath, addr 0x1bd7f04, size 0x290, virtual true, abstract: false, final false
  inline void GenerateQueryPath();

  /// @brief Method GetHashCode, addr 0x1bd8350, size 0x2bc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::__DebugUI__Container* New_ctor();

  static inline ::UnityEngine::Rendering::__DebugUI__Container* New_ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* children);

  /// @brief Method OnItemAdded, addr 0x1bd8278, size 0x6c, virtual true, abstract: false, final false
  inline void OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                          ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e);

  /// @brief Method OnItemRemoved, addr 0x1bd82e4, size 0x6c, virtual true, abstract: false, final false
  inline void OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                            ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e);

  constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*& __cordl_internal_get__children_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*> const&
  __cordl_internal_get__children_k__BackingField() const;

  constexpr void __cordl_internal_set__children_k__BackingField(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* value);

  /// @brief Method .ctor, addr 0x1bd7cb8, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1bd7e0c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* children);

  /// @brief Method get_children, addr 0x1bd7a00, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* get_children();

  /// @brief Method get_panel, addr 0x1bd7a10, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::__DebugUI__Panel* get_panel();

  /// @brief Convert to "::UnityEngine::Rendering::__DebugUI__IContainer"
  constexpr ::UnityEngine::Rendering::__DebugUI__IContainer* i___UnityEngine__Rendering____DebugUI__IContainer() noexcept;

  /// @brief Method set_children, addr 0x1bd7a08, size 0x8, virtual false, abstract: false, final false
  inline void set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* value);

  /// @brief Method set_panel, addr 0x1bd7a18, size 0x2a0, virtual true, abstract: false, final false
  inline void set_panel(::UnityEngine::Rendering::__DebugUI__Panel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Container();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Container", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Container(__DebugUI__Container&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Container", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Container(__DebugUI__Container const&) = delete;

  /// @brief Field <children>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* ____children_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__Container, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Container, ____children_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::ContextMenuItem
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DebugUI::Foldout::ContextMenuItem
struct CORDL_TYPE __DebugUI__Foldout__ContextMenuItem {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Foldout__ContextMenuItem();

  // Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: None }]
  constexpr __DebugUI__Foldout__ContextMenuItem(::StringW displayName, ::System::Action* action) noexcept;

  /// @brief Field displayName, offset: 0x0, size: 0x8, def value: None
  ::StringW displayName;

  /// @brief Field action, offset: 0x8, size: 0x8, def value: None
  ::System::Action* action;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem, displayName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem, action) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Foldout
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::Foldout*
class CORDL_TYPE __DebugUI__Foldout : public ::UnityEngine::Rendering::__DebugUI__Container {
public:
  // Declarations
  using ContextMenuItem = ::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem;

  /// @brief Field <columnLabels>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__columnLabels_k__BackingField,
                      put = __cordl_internal_set__columnLabels_k__BackingField))::ArrayW<::StringW, ::Array<::StringW>*> _columnLabels_k__BackingField;

  /// @brief Field <columnTooltips>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__columnTooltips_k__BackingField,
                      put = __cordl_internal_set__columnTooltips_k__BackingField))::ArrayW<::StringW, ::Array<::StringW>*> _columnTooltips_k__BackingField;

  __declspec(property(get = get_columnLabels, put = set_columnLabels))::ArrayW<::StringW, ::Array<::StringW>*> columnLabels;

  __declspec(property(get = get_columnTooltips, put = set_columnTooltips))::ArrayW<::StringW, ::Array<::StringW>*> columnTooltips;

  /// @brief Field contextMenuItems, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_contextMenuItems,
                      put = __cordl_internal_set_contextMenuItems))::System::Collections::Generic::List_1<::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem>* contextMenuItems;

  /// @brief Field isHeader, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_isHeader, put = __cordl_internal_set_isHeader)) bool isHeader;

  __declspec(property(get = get_isReadOnly)) bool isReadOnly;

  /// @brief Field opened, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_opened, put = __cordl_internal_set_opened)) bool opened;

  /// @brief Convert operator to "::UnityEngine::Rendering::__DebugUI__IValueField"
  constexpr operator ::UnityEngine::Rendering::__DebugUI__IValueField*() noexcept;

  /// @brief Method GetValue, addr 0x1bd8660, size 0x8, virtual false, abstract: false, final false
  inline bool GetValue();

  static inline ::UnityEngine::Rendering::__DebugUI__Foldout* New_ctor();

  static inline ::UnityEngine::Rendering::__DebugUI__Foldout* New_ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* children,
                                                                       ::ArrayW<::StringW, ::Array<::StringW>*> columnLabels, ::ArrayW<::StringW, ::Array<::StringW>*> columnTooltips);

  /// @brief Method SetValue, addr 0x1bd86c4, size 0x78, virtual true, abstract: false, final true
  inline void SetValue(::System::Object* value);

  /// @brief Method SetValue, addr 0x1bd8744, size 0xc, virtual false, abstract: false, final false
  inline void SetValue(bool value);

  /// @brief Method UnityEngine.Rendering.DebugUI.IValueField.GetValue, addr 0x1bd8668, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* UnityEngine_Rendering_DebugUI_IValueField_GetValue();

  /// @brief Method ValidateValue, addr 0x1bd873c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* ValidateValue(::System::Object* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__columnLabels_k__BackingField() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__columnLabels_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__columnTooltips_k__BackingField() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__columnTooltips_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem>*& __cordl_internal_get_contextMenuItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem>*> const& __cordl_internal_get_contextMenuItems() const;

  constexpr bool const& __cordl_internal_get_isHeader() const;

  constexpr bool& __cordl_internal_get_isHeader();

  constexpr bool const& __cordl_internal_get_opened() const;

  constexpr bool& __cordl_internal_get_opened();

  constexpr void __cordl_internal_set__columnLabels_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__columnTooltips_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_contextMenuItems(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem>* value);

  constexpr void __cordl_internal_set_isHeader(bool value);

  constexpr void __cordl_internal_set_opened(bool value);

  /// @brief Method .ctor, addr 0x1bd8634, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1bd8638, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* children, ::ArrayW<::StringW, ::Array<::StringW>*> columnLabels,
                    ::ArrayW<::StringW, ::Array<::StringW>*> columnTooltips);

  /// @brief Method get_columnLabels, addr 0x1bd8614, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_columnLabels();

  /// @brief Method get_columnTooltips, addr 0x1bd8624, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_columnTooltips();

  /// @brief Method get_isReadOnly, addr 0x1bd860c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isReadOnly();

  /// @brief Convert to "::UnityEngine::Rendering::__DebugUI__IValueField"
  constexpr ::UnityEngine::Rendering::__DebugUI__IValueField* i___UnityEngine__Rendering____DebugUI__IValueField() noexcept;

  /// @brief Method set_columnLabels, addr 0x1bd861c, size 0x8, virtual false, abstract: false, final false
  inline void set_columnLabels(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_columnTooltips, addr 0x1bd862c, size 0x8, virtual false, abstract: false, final false
  inline void set_columnTooltips(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Foldout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Foldout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Foldout(__DebugUI__Foldout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Foldout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Foldout(__DebugUI__Foldout const&) = delete;

  /// @brief Field opened, offset: 0x50, size: 0x1, def value: None
  bool ___opened;

  /// @brief Field isHeader, offset: 0x51, size: 0x1, def value: None
  bool ___isHeader;

  /// @brief Field contextMenuItems, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem>* ___contextMenuItems;

  /// @brief Field <columnLabels>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____columnLabels_k__BackingField;

  /// @brief Field <columnTooltips>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____columnTooltips_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__Foldout, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Foldout, ___opened) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Foldout, ___isHeader) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Foldout, ___contextMenuItems) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Foldout, ____columnLabels_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Foldout, ____columnTooltips_k__BackingField) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::HBox
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::HBox*
class CORDL_TYPE __DebugUI__HBox : public ::UnityEngine::Rendering::__DebugUI__Container {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::__DebugUI__HBox* New_ctor();

  /// @brief Method .ctor, addr 0x1bd8750, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__HBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__HBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__HBox(__DebugUI__HBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__HBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__HBox(__DebugUI__HBox const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__HBox, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::VBox
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::VBox*
class CORDL_TYPE __DebugUI__VBox : public ::UnityEngine::Rendering::__DebugUI__Container {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::__DebugUI__VBox* New_ctor();

  /// @brief Method .ctor, addr 0x1bd87a0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__VBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__VBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__VBox(__DebugUI__VBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__VBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__VBox(__DebugUI__VBox const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__VBox, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::Row
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugUI::Table::Row*
class CORDL_TYPE __DebugUI__Table__Row : public ::UnityEngine::Rendering::__DebugUI__Foldout {
public:
  // Declarations
  static inline ::GlobalNamespace::__DebugUI__Table__Row* New_ctor();

  /// @brief Method .ctor, addr 0x1bd8b40, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Table__Row();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Table__Row", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Table__Row(__DebugUI__Table__Row&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Table__Row", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Table__Row(__DebugUI__Table__Row const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugUI__Table__Row, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Table
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::Table*
class CORDL_TYPE __DebugUI__Table : public ::UnityEngine::Rendering::__DebugUI__Container {
public:
  // Declarations
  using Row = ::GlobalNamespace::__DebugUI__Table__Row;

  __declspec(property(get = get_VisibleColumns))::ArrayW<bool, ::Array<bool>*> VisibleColumns;

  /// @brief Field isReadOnly, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_isReadOnly, put = __cordl_internal_set_isReadOnly)) bool isReadOnly;

  /// @brief Field m_Header, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Header, put = __cordl_internal_set_m_Header))::ArrayW<bool, ::Array<bool>*> m_Header;

  /// @brief Method GetColumnVisibility, addr 0x1bd8ac4, size 0x4c, virtual false, abstract: false, final false
  inline bool GetColumnVisibility(int32_t index);

  static inline ::UnityEngine::Rendering::__DebugUI__Table* New_ctor();

  /// @brief Method OnItemAdded, addr 0x1bd8b10, size 0x18, virtual true, abstract: false, final false
  inline void OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                          ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e);

  /// @brief Method OnItemRemoved, addr 0x1bd8b28, size 0x18, virtual true, abstract: false, final false
  inline void OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                            ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e);

  /// @brief Method SetColumnVisibility, addr 0x1bd8840, size 0x4c, virtual false, abstract: false, final false
  inline void SetColumnVisibility(int32_t index, bool visible);

  constexpr bool const& __cordl_internal_get_isReadOnly() const;

  constexpr bool& __cordl_internal_get_isReadOnly();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_Header() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_Header();

  constexpr void __cordl_internal_set_isReadOnly(bool value);

  constexpr void __cordl_internal_set_m_Header(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method .ctor, addr 0x1bd87f0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_VisibleColumns, addr 0x1bd888c, size 0x238, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> get_VisibleColumns();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Table();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Table", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Table(__DebugUI__Table&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Table", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Table(__DebugUI__Table const&) = delete;

  /// @brief Field isReadOnly, offset: 0x50, size: 0x1, def value: None
  bool ___isReadOnly;

  /// @brief Field m_Header, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_Header;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__Table, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Table, ___isReadOnly) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Table, ___m_Header) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::NameAndTooltip
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DebugUI::Widget::NameAndTooltip
struct CORDL_TYPE __DebugUI__Widget__NameAndTooltip {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Widget__NameAndTooltip();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "tooltip", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __DebugUI__Widget__NameAndTooltip(::StringW name, ::StringW tooltip) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field tooltip, offset: 0x8, size: 0x8, def value: None
  ::StringW tooltip;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, tooltip) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IContainer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::IContainer*
class CORDL_TYPE __DebugUI__IContainer {
public:
  // Declarations
  __declspec(property(get = get_children))::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* children;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_queryPath))::StringW queryPath;

  /// @brief Method get_children, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* get_children();

  /// @brief Method get_displayName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_displayName();

  /// @brief Method get_queryPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_queryPath();

  /// @brief Method set_displayName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_displayName(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__IContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__IContainer(__DebugUI__IContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__IContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__IContainer(__DebugUI__IContainer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Type: ::IValueField
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::IValueField*
class CORDL_TYPE __DebugUI__IValueField {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetValue();

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetValue(::System::Object* value);

  /// @brief Method ValidateValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ValidateValue(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__IValueField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__IValueField(__DebugUI__IValueField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__IValueField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__IValueField(__DebugUI__IValueField const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Type: ::Button
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::Button*
class CORDL_TYPE __DebugUI__Button : public ::UnityEngine::Rendering::__DebugUI__Widget {
public:
  // Declarations
  /// @brief Field <action>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__action_k__BackingField, put = __cordl_internal_set__action_k__BackingField))::System::Action* _action_k__BackingField;

  __declspec(property(get = get_action, put = set_action))::System::Action* action;

  static inline ::UnityEngine::Rendering::__DebugUI__Button* New_ctor();

  constexpr ::System::Action*& __cordl_internal_get__action_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get__action_k__BackingField() const;

  constexpr void __cordl_internal_set__action_k__BackingField(::System::Action* value);

  /// @brief Method .ctor, addr 0x1bd8c8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_action, addr 0x1bd8c7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action* get_action();

  /// @brief Method set_action, addr 0x1bd8c84, size 0x8, virtual false, abstract: false, final false
  inline void set_action(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Button();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Button", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Button(__DebugUI__Button&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Button", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Button(__DebugUI__Button const&) = delete;

  /// @brief Field <action>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ____action_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__Button, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Button, ____action_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::Value
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::Value*
class CORDL_TYPE __DebugUI__Value : public ::UnityEngine::Rendering::__DebugUI__Widget {
public:
  // Declarations
  /// @brief Field <getter>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__getter_k__BackingField, put = __cordl_internal_set__getter_k__BackingField))::System::Func_1<::System::Object*>* _getter_k__BackingField;

  __declspec(property(get = get_getter, put = set_getter))::System::Func_1<::System::Object*>* getter;

  /// @brief Field refreshRate, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_refreshRate, put = __cordl_internal_set_refreshRate)) float_t refreshRate;

  /// @brief Method GetValue, addr 0x1bd8d04, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* GetValue();

  static inline ::UnityEngine::Rendering::__DebugUI__Value* New_ctor();

  constexpr ::System::Func_1<::System::Object*>*& __cordl_internal_get__getter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Object*>*> const& __cordl_internal_get__getter_k__BackingField() const;

  constexpr float_t const& __cordl_internal_get_refreshRate() const;

  constexpr float_t& __cordl_internal_get_refreshRate();

  constexpr void __cordl_internal_set__getter_k__BackingField(::System::Func_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_refreshRate(float_t value);

  /// @brief Method .ctor, addr 0x1bd8ca4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_getter, addr 0x1bd8c94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::System::Object*>* get_getter();

  /// @brief Method set_getter, addr 0x1bd8c9c, size 0x8, virtual false, abstract: false, final false
  inline void set_getter(::System::Func_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Value();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Value", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Value(__DebugUI__Value&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Value", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Value(__DebugUI__Value const&) = delete;

  /// @brief Field <getter>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Func_1<::System::Object*>* ____getter_k__BackingField;

  /// @brief Field refreshRate, offset: 0x50, size: 0x4, def value: None
  float_t ___refreshRate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__Value, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Value, ____getter_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Value, ___refreshRate) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::Field`1
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::DebugUI::Field`1<T>*
class CORDL_TYPE __DebugUI__Field_1 : public ::UnityEngine::Rendering::__DebugUI__Widget {
public:
  // Declarations
  /// @brief Field <getter>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__getter_k__BackingField, put = __cordl_internal_set__getter_k__BackingField))::System::Func_1<T>* _getter_k__BackingField;

  /// @brief Field <setter>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__setter_k__BackingField, put = __cordl_internal_set__setter_k__BackingField))::System::Action_1<T>* _setter_k__BackingField;

  __declspec(property(get = get_getter, put = set_getter))::System::Func_1<T>* getter;

  /// @brief Field onValueChanged, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_onValueChanged, put = __cordl_internal_set_onValueChanged))::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<T>*, T>* onValueChanged;

  __declspec(property(get = get_setter, put = set_setter))::System::Action_1<T>* setter;

  /// @brief Convert operator to "::UnityEngine::Rendering::__DebugUI__IValueField"
  constexpr operator ::UnityEngine::Rendering::__DebugUI__IValueField*() noexcept;

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValue();

  static inline ::UnityEngine::Rendering::__DebugUI__Field_1<T>* New_ctor();

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetValue(::System::Object* value);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetValue(T value);

  /// @brief Method UnityEngine.Rendering.DebugUI.IValueField.GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* UnityEngine_Rendering_DebugUI_IValueField_GetValue();

  /// @brief Method UnityEngine.Rendering.DebugUI.IValueField.ValidateValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* UnityEngine_Rendering_DebugUI_IValueField_ValidateValue(::System::Object* value);

  /// @brief Method ValidateValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T ValidateValue(T value);

  constexpr ::System::Func_1<T>*& __cordl_internal_get__getter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __cordl_internal_get__getter_k__BackingField() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get__setter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get__setter_k__BackingField() const;

  constexpr ::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<T>*, T>*& __cordl_internal_get_onValueChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<T>*, T>*> const& __cordl_internal_get_onValueChanged() const;

  constexpr void __cordl_internal_set__getter_k__BackingField(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set__setter_k__BackingField(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_onValueChanged(::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<T>*, T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_getter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Func_1<T>* get_getter();

  /// @brief Method get_setter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Action_1<T>* get_setter();

  /// @brief Convert to "::UnityEngine::Rendering::__DebugUI__IValueField"
  constexpr ::UnityEngine::Rendering::__DebugUI__IValueField* i___UnityEngine__Rendering____DebugUI__IValueField() noexcept;

  /// @brief Method set_getter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_getter(::System::Func_1<T>* value);

  /// @brief Method set_setter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_setter(::System::Action_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Field_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Field_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Field_1(__DebugUI__Field_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Field_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Field_1(__DebugUI__Field_1 const&) = delete;

  /// @brief Field <getter>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Func_1<T>* ____getter_k__BackingField;

  /// @brief Field <setter>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<T>* ____setter_k__BackingField;

  /// @brief Field onValueChanged, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<T>*, T>* ___onValueChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Type: ::BoolField
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::BoolField*
class CORDL_TYPE __DebugUI__BoolField : public ::UnityEngine::Rendering::__DebugUI__Field_1<bool> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::__DebugUI__BoolField* New_ctor();

  /// @brief Method .ctor, addr 0x1bd8d28, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__BoolField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__BoolField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__BoolField(__DebugUI__BoolField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__BoolField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__BoolField(__DebugUI__BoolField const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__BoolField, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::HistoryBoolField
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::HistoryBoolField*
class CORDL_TYPE __DebugUI__HistoryBoolField : public ::UnityEngine::Rendering::__DebugUI__BoolField {
public:
  // Declarations
  /// @brief Field <historyGetter>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__historyGetter_k__BackingField,
                      put = __cordl_internal_set__historyGetter_k__BackingField))::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> _historyGetter_k__BackingField;

  __declspec(property(get = get_historyDepth)) int32_t historyDepth;

  __declspec(property(get = get_historyGetter, put = set_historyGetter))::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> historyGetter;

  /// @brief Method GetHistoryValue, addr 0x1bd8d98, size 0x40, virtual false, abstract: false, final false
  inline bool GetHistoryValue(int32_t historyIndex);

  static inline ::UnityEngine::Rendering::__DebugUI__HistoryBoolField* New_ctor();

  constexpr ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> const& __cordl_internal_get__historyGetter_k__BackingField() const;

  constexpr ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*>& __cordl_internal_get__historyGetter_k__BackingField();

  constexpr void __cordl_internal_set__historyGetter_k__BackingField(::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> value);

  /// @brief Method .ctor, addr 0x1bd8dd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_historyDepth, addr 0x1bd8d80, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_historyDepth();

  /// @brief Method get_historyGetter, addr 0x1bd8d70, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> get_historyGetter();

  /// @brief Method set_historyGetter, addr 0x1bd8d78, size 0x8, virtual false, abstract: false, final false
  inline void set_historyGetter(::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__HistoryBoolField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__HistoryBoolField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__HistoryBoolField(__DebugUI__HistoryBoolField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__HistoryBoolField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__HistoryBoolField(__DebugUI__HistoryBoolField const&) = delete;

  /// @brief Field <historyGetter>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> ____historyGetter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__HistoryBoolField, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__HistoryBoolField, ____historyGetter_k__BackingField) == 0x60, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::IntField
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::IntField*
class CORDL_TYPE __DebugUI__IntField : public ::UnityEngine::Rendering::__DebugUI__Field_1<int32_t> {
public:
  // Declarations
  /// @brief Field incStep, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) int32_t incStep;

  /// @brief Field intStepMult, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_intStepMult, put = __cordl_internal_set_intStepMult)) int32_t intStepMult;

  /// @brief Field max, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max))::System::Func_1<int32_t>* max;

  /// @brief Field min, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min))::System::Func_1<int32_t>* min;

  static inline ::UnityEngine::Rendering::__DebugUI__IntField* New_ctor();

  /// @brief Method ValidateValue, addr 0x1bd8ddc, size 0x60, virtual true, abstract: false, final false
  inline int32_t ValidateValue(int32_t value);

  constexpr int32_t const& __cordl_internal_get_incStep() const;

  constexpr int32_t& __cordl_internal_get_incStep();

  constexpr int32_t const& __cordl_internal_get_intStepMult() const;

  constexpr int32_t& __cordl_internal_get_intStepMult();

  constexpr ::System::Func_1<int32_t>*& __cordl_internal_get_max();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<int32_t>*> const& __cordl_internal_get_max() const;

  constexpr ::System::Func_1<int32_t>*& __cordl_internal_get_min();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<int32_t>*> const& __cordl_internal_get_min() const;

  constexpr void __cordl_internal_set_incStep(int32_t value);

  constexpr void __cordl_internal_set_intStepMult(int32_t value);

  constexpr void __cordl_internal_set_max(::System::Func_1<int32_t>* value);

  constexpr void __cordl_internal_set_min(::System::Func_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x1bd8e3c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__IntField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__IntField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__IntField(__DebugUI__IntField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__IntField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__IntField(__DebugUI__IntField const&) = delete;

  /// @brief Field min, offset: 0x60, size: 0x8, def value: None
  ::System::Func_1<int32_t>* ___min;

  /// @brief Field max, offset: 0x68, size: 0x8, def value: None
  ::System::Func_1<int32_t>* ___max;

  /// @brief Field incStep, offset: 0x70, size: 0x4, def value: None
  int32_t ___incStep;

  /// @brief Field intStepMult, offset: 0x74, size: 0x4, def value: None
  int32_t ___intStepMult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__IntField, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__IntField, ___min) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__IntField, ___max) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__IntField, ___incStep) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__IntField, ___intStepMult) == 0x74, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::UIntField
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::UIntField*
class CORDL_TYPE __DebugUI__UIntField : public ::UnityEngine::Rendering::__DebugUI__Field_1<uint32_t> {
public:
  // Declarations
  /// @brief Field incStep, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) uint32_t incStep;

  /// @brief Field intStepMult, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_intStepMult, put = __cordl_internal_set_intStepMult)) uint32_t intStepMult;

  /// @brief Field max, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max))::System::Func_1<uint32_t>* max;

  /// @brief Field min, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min))::System::Func_1<uint32_t>* min;

  static inline ::UnityEngine::Rendering::__DebugUI__UIntField* New_ctor();

  /// @brief Method ValidateValue, addr 0x1bd8e90, size 0x60, virtual true, abstract: false, final false
  inline uint32_t ValidateValue(uint32_t value);

  constexpr uint32_t const& __cordl_internal_get_incStep() const;

  constexpr uint32_t& __cordl_internal_get_incStep();

  constexpr uint32_t const& __cordl_internal_get_intStepMult() const;

  constexpr uint32_t& __cordl_internal_get_intStepMult();

  constexpr ::System::Func_1<uint32_t>*& __cordl_internal_get_max();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<uint32_t>*> const& __cordl_internal_get_max() const;

  constexpr ::System::Func_1<uint32_t>*& __cordl_internal_get_min();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<uint32_t>*> const& __cordl_internal_get_min() const;

  constexpr void __cordl_internal_set_incStep(uint32_t value);

  constexpr void __cordl_internal_set_intStepMult(uint32_t value);

  constexpr void __cordl_internal_set_max(::System::Func_1<uint32_t>* value);

  constexpr void __cordl_internal_set_min(::System::Func_1<uint32_t>* value);

  /// @brief Method .ctor, addr 0x1bd8ef0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__UIntField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__UIntField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__UIntField(__DebugUI__UIntField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__UIntField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__UIntField(__DebugUI__UIntField const&) = delete;

  /// @brief Field min, offset: 0x60, size: 0x8, def value: None
  ::System::Func_1<uint32_t>* ___min;

  /// @brief Field max, offset: 0x68, size: 0x8, def value: None
  ::System::Func_1<uint32_t>* ___max;

  /// @brief Field incStep, offset: 0x70, size: 0x4, def value: None
  uint32_t ___incStep;

  /// @brief Field intStepMult, offset: 0x74, size: 0x4, def value: None
  uint32_t ___intStepMult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__UIntField, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__UIntField, ___min) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__UIntField, ___max) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__UIntField, ___incStep) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__UIntField, ___intStepMult) == 0x74, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::FloatField
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::FloatField*
class CORDL_TYPE __DebugUI__FloatField : public ::UnityEngine::Rendering::__DebugUI__Field_1<float_t> {
public:
  // Declarations
  /// @brief Field decimals, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_decimals, put = __cordl_internal_set_decimals)) int32_t decimals;

  /// @brief Field incStep, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) float_t incStep;

  /// @brief Field incStepMult, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_incStepMult, put = __cordl_internal_set_incStepMult)) float_t incStepMult;

  /// @brief Field max, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max))::System::Func_1<float_t>* max;

  /// @brief Field min, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min))::System::Func_1<float_t>* min;

  static inline ::UnityEngine::Rendering::__DebugUI__FloatField* New_ctor();

  /// @brief Method ValidateValue, addr 0x1bd8f44, size 0x60, virtual true, abstract: false, final false
  inline float_t ValidateValue(float_t value);

  constexpr int32_t const& __cordl_internal_get_decimals() const;

  constexpr int32_t& __cordl_internal_get_decimals();

  constexpr float_t const& __cordl_internal_get_incStep() const;

  constexpr float_t& __cordl_internal_get_incStep();

  constexpr float_t const& __cordl_internal_get_incStepMult() const;

  constexpr float_t& __cordl_internal_get_incStepMult();

  constexpr ::System::Func_1<float_t>*& __cordl_internal_get_max();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<float_t>*> const& __cordl_internal_get_max() const;

  constexpr ::System::Func_1<float_t>*& __cordl_internal_get_min();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<float_t>*> const& __cordl_internal_get_min() const;

  constexpr void __cordl_internal_set_decimals(int32_t value);

  constexpr void __cordl_internal_set_incStep(float_t value);

  constexpr void __cordl_internal_set_incStepMult(float_t value);

  constexpr void __cordl_internal_set_max(::System::Func_1<float_t>* value);

  constexpr void __cordl_internal_set_min(::System::Func_1<float_t>* value);

  /// @brief Method .ctor, addr 0x1bd8fa4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__FloatField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__FloatField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__FloatField(__DebugUI__FloatField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__FloatField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__FloatField(__DebugUI__FloatField const&) = delete;

  /// @brief Field min, offset: 0x60, size: 0x8, def value: None
  ::System::Func_1<float_t>* ___min;

  /// @brief Field max, offset: 0x68, size: 0x8, def value: None
  ::System::Func_1<float_t>* ___max;

  /// @brief Field incStep, offset: 0x70, size: 0x4, def value: None
  float_t ___incStep;

  /// @brief Field incStepMult, offset: 0x74, size: 0x4, def value: None
  float_t ___incStepMult;

  /// @brief Field decimals, offset: 0x78, size: 0x4, def value: None
  int32_t ___decimals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__FloatField, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__FloatField, ___min) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__FloatField, ___max) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__FloatField, ___incStep) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__FloatField, ___incStepMult) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__FloatField, ___decimals) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugUI::EnumUtility::<>c*
class CORDL_TYPE __DebugUI__EnumUtility____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__DebugUI__EnumUtility____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0))::System::Func_2<::System::Reflection::FieldInfo*, ::UnityEngine::GUIContent*>* __9__0_0;

  static inline ::GlobalNamespace::__DebugUI__EnumUtility____c* New_ctor();

  /// @brief Method <MakeEnumNames>b__0_0, addr 0x19fb618, size 0x1d0, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIContent* _MakeEnumNames_b__0_0(::System::Reflection::FieldInfo* fieldInfo);

  /// @brief Method .ctor, addr 0x19fb610, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__DebugUI__EnumUtility____c* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, ::UnityEngine::GUIContent*>* getStaticF___9__0_0();

  static inline void setStaticF___9(::GlobalNamespace::__DebugUI__EnumUtility____c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::System::Reflection::FieldInfo*, ::UnityEngine::GUIContent*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__EnumUtility____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__EnumUtility____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__EnumUtility____c(__DebugUI__EnumUtility____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__EnumUtility____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__EnumUtility____c(__DebugUI__EnumUtility____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugUI__EnumUtility____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EnumUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::EnumUtility*
class CORDL_TYPE __DebugUI__EnumUtility : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__DebugUI__EnumUtility____c;

  /// @brief Method MakeEnumNames, addr 0x1bd9000, size 0x13c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> MakeEnumNames(::System::Type* enumType);

  /// @brief Method MakeEnumValues, addr 0x1bd913c, size 0x13c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> MakeEnumValues(::System::Type* enumType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__EnumUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__EnumUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__EnumUtility(__DebugUI__EnumUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__EnumUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__EnumUtility(__DebugUI__EnumUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__EnumUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugUI::EnumField::<>c*
class CORDL_TYPE __DebugUI__EnumField____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__DebugUI__EnumField____c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0))::System::Func_2<::UnityEngine::GUIContent*, ::StringW>* __9__17_0;

  static inline ::GlobalNamespace::__DebugUI__EnumField____c* New_ctor();

  /// @brief Method <InitQuickSeparators>b__17_0, addr 0x19fbc24, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW _InitQuickSeparators_b__17_0(::UnityEngine::GUIContent* x);

  /// @brief Method .ctor, addr 0x19fbc1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__DebugUI__EnumField____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::GUIContent*, ::StringW>* getStaticF___9__17_0();

  static inline void setStaticF___9(::GlobalNamespace::__DebugUI__EnumField____c* value);

  static inline void setStaticF___9__17_0(::System::Func_2<::UnityEngine::GUIContent*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__EnumField____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__EnumField____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__EnumField____c(__DebugUI__EnumField____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__EnumField____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__EnumField____c(__DebugUI__EnumField____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugUI__EnumField____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EnumField
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::EnumField*
class CORDL_TYPE __DebugUI__EnumField : public ::UnityEngine::Rendering::__DebugUI__Field_1<int32_t> {
public:
  // Declarations
  using __c = ::GlobalNamespace::__DebugUI__EnumField____c;

  /// @brief Field <getIndex>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__getIndex_k__BackingField, put = __cordl_internal_set__getIndex_k__BackingField))::System::Func_1<int32_t>* _getIndex_k__BackingField;

  /// @brief Field <setIndex>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__setIndex_k__BackingField, put = __cordl_internal_set__setIndex_k__BackingField))::System::Action_1<int32_t>* _setIndex_k__BackingField;

  __declspec(property(put = set_autoEnum))::System::Type* autoEnum;

  __declspec(property(get = get_currentIndex, put = set_currentIndex)) int32_t currentIndex;

  /// @brief Field enumNames, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_enumNames, put = __cordl_internal_set_enumNames))::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> enumNames;

  /// @brief Field enumValues, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_enumValues, put = __cordl_internal_set_enumValues))::ArrayW<int32_t, ::Array<int32_t>*> enumValues;

  __declspec(property(get = get_getIndex, put = set_getIndex))::System::Func_1<int32_t>* getIndex;

  /// @brief Field indexes, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_indexes, put = __cordl_internal_set_indexes))::ArrayW<int32_t, ::Array<int32_t>*> indexes;

  /// @brief Field quickSeparators, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_quickSeparators, put = __cordl_internal_set_quickSeparators))::ArrayW<int32_t, ::Array<int32_t>*> quickSeparators;

  __declspec(property(get = get_setIndex, put = set_setIndex))::System::Action_1<int32_t>* setIndex;

  /// @brief Method InitIndexes, addr 0x19fb898, size 0xd0, virtual false, abstract: false, final false
  inline void InitIndexes();

  /// @brief Method InitQuickSeparators, addr 0x19fb968, size 0x208, virtual false, abstract: false, final false
  inline void InitQuickSeparators();

  static inline ::UnityEngine::Rendering::__DebugUI__EnumField* New_ctor();

  constexpr ::System::Func_1<int32_t>*& __cordl_internal_get__getIndex_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<int32_t>*> const& __cordl_internal_get__getIndex_k__BackingField() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get__setIndex_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get__setIndex_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> const& __cordl_internal_get_enumNames() const;

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>& __cordl_internal_get_enumNames();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_enumValues() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_enumValues();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_indexes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_indexes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_quickSeparators() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_quickSeparators();

  constexpr void __cordl_internal_set__getIndex_k__BackingField(::System::Func_1<int32_t>* value);

  constexpr void __cordl_internal_set__setIndex_k__BackingField(::System::Action_1<int32_t>* value);

  constexpr void __cordl_internal_set_enumNames(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value);

  constexpr void __cordl_internal_set_enumValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_indexes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_quickSeparators(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x19fbb70, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_currentIndex, addr 0x19fb808, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_currentIndex();

  /// @brief Method get_getIndex, addr 0x19fb7e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<int32_t>* get_getIndex();

  /// @brief Method get_setIndex, addr 0x19fb7f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<int32_t>* get_setIndex();

  /// @brief Method set_autoEnum, addr 0x19fb850, size 0x48, virtual false, abstract: false, final false
  inline void set_autoEnum(::System::Type* value);

  /// @brief Method set_currentIndex, addr 0x19fb82c, size 0x24, virtual false, abstract: false, final false
  inline void set_currentIndex(int32_t value);

  /// @brief Method set_getIndex, addr 0x19fb7f0, size 0x8, virtual false, abstract: false, final false
  inline void set_getIndex(::System::Func_1<int32_t>* value);

  /// @brief Method set_setIndex, addr 0x19fb800, size 0x8, virtual false, abstract: false, final false
  inline void set_setIndex(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__EnumField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__EnumField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__EnumField(__DebugUI__EnumField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__EnumField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__EnumField(__DebugUI__EnumField const&) = delete;

  /// @brief Field enumNames, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> ___enumNames;

  /// @brief Field enumValues, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___enumValues;

  /// @brief Field quickSeparators, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___quickSeparators;

  /// @brief Field indexes, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___indexes;

  /// @brief Field <getIndex>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::System::Func_1<int32_t>* ____getIndex_k__BackingField;

  /// @brief Field <setIndex>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ____setIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__EnumField, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__EnumField, ___enumNames) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__EnumField, ___enumValues) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__EnumField, ___quickSeparators) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__EnumField, ___indexes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__EnumField, ____getIndex_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__EnumField, ____setIndex_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::HistoryEnumField
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::HistoryEnumField*
class CORDL_TYPE __DebugUI__HistoryEnumField : public ::UnityEngine::Rendering::__DebugUI__EnumField {
public:
  // Declarations
  /// @brief Field <historyIndexGetter>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__historyIndexGetter_k__BackingField,
                      put = __cordl_internal_set__historyIndexGetter_k__BackingField))::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> _historyIndexGetter_k__BackingField;

  __declspec(property(get = get_historyDepth)) int32_t historyDepth;

  __declspec(property(get = get_historyIndexGetter, put = set_historyIndexGetter))::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> historyIndexGetter;

  /// @brief Method GetHistoryValue, addr 0x19fbcd8, size 0x40, virtual false, abstract: false, final false
  inline int32_t GetHistoryValue(int32_t historyIndex);

  static inline ::UnityEngine::Rendering::__DebugUI__HistoryEnumField* New_ctor();

  constexpr ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> const& __cordl_internal_get__historyIndexGetter_k__BackingField() const;

  constexpr ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*>& __cordl_internal_get__historyIndexGetter_k__BackingField();

  constexpr void __cordl_internal_set__historyIndexGetter_k__BackingField(::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> value);

  /// @brief Method .ctor, addr 0x19fbd18, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_historyDepth, addr 0x19fbcc0, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_historyDepth();

  /// @brief Method get_historyIndexGetter, addr 0x19fbcb0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> get_historyIndexGetter();

  /// @brief Method set_historyIndexGetter, addr 0x19fbcb8, size 0x8, virtual false, abstract: false, final false
  inline void set_historyIndexGetter(::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__HistoryEnumField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__HistoryEnumField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__HistoryEnumField(__DebugUI__HistoryEnumField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__HistoryEnumField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__HistoryEnumField(__DebugUI__HistoryEnumField const&) = delete;

  /// @brief Field <historyIndexGetter>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> ____historyIndexGetter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__HistoryEnumField, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__HistoryEnumField, ____historyIndexGetter_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::BitField
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::BitField*
class CORDL_TYPE __DebugUI__BitField : public ::UnityEngine::Rendering::__DebugUI__Field_1<::System::Enum*> {
public:
  // Declarations
  /// @brief Field <enumNames>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__enumNames_k__BackingField,
                      put = __cordl_internal_set__enumNames_k__BackingField))::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> _enumNames_k__BackingField;

  /// @brief Field <enumValues>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__enumValues_k__BackingField, put = __cordl_internal_set__enumValues_k__BackingField))::ArrayW<int32_t, ::Array<int32_t>*> _enumValues_k__BackingField;

  __declspec(property(get = get_enumNames, put = set_enumNames))::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> enumNames;

  __declspec(property(get = get_enumType, put = set_enumType))::System::Type* enumType;

  __declspec(property(get = get_enumValues, put = set_enumValues))::ArrayW<int32_t, ::Array<int32_t>*> enumValues;

  /// @brief Field m_EnumType, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnumType, put = __cordl_internal_set_m_EnumType))::System::Type* m_EnumType;

  static inline ::UnityEngine::Rendering::__DebugUI__BitField* New_ctor();

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> const& __cordl_internal_get__enumNames_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>& __cordl_internal_get__enumNames_k__BackingField();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__enumValues_k__BackingField() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__enumValues_k__BackingField();

  constexpr ::System::Type*& __cordl_internal_get_m_EnumType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_EnumType() const;

  constexpr void __cordl_internal_set__enumNames_k__BackingField(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value);

  constexpr void __cordl_internal_set__enumValues_k__BackingField(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_EnumType(::System::Type* value);

  /// @brief Method .ctor, addr 0x19fbd84, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enumNames, addr 0x19fbd1c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> get_enumNames();

  /// @brief Method get_enumType, addr 0x19fbd3c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_enumType();

  /// @brief Method get_enumValues, addr 0x19fbd2c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_enumValues();

  /// @brief Method set_enumNames, addr 0x19fbd24, size 0x8, virtual false, abstract: false, final false
  inline void set_enumNames(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value);

  /// @brief Method set_enumType, addr 0x19fbd44, size 0x40, virtual false, abstract: false, final false
  inline void set_enumType(::System::Type* value);

  /// @brief Method set_enumValues, addr 0x19fbd34, size 0x8, virtual false, abstract: false, final false
  inline void set_enumValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__BitField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__BitField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__BitField(__DebugUI__BitField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__BitField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__BitField(__DebugUI__BitField const&) = delete;

  /// @brief Field <enumNames>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> ____enumNames_k__BackingField;

  /// @brief Field <enumValues>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____enumValues_k__BackingField;

  /// @brief Field m_EnumType, offset: 0x70, size: 0x8, def value: None
  ::System::Type* ___m_EnumType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__BitField, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__BitField, ____enumNames_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__BitField, ____enumValues_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__BitField, ___m_EnumType) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::ColorField
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::ColorField*
class CORDL_TYPE __DebugUI__ColorField : public ::UnityEngine::Rendering::__DebugUI__Field_1<::UnityEngine::Color> {
public:
  // Declarations
  /// @brief Field decimals, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_decimals, put = __cordl_internal_set_decimals)) int32_t decimals;

  /// @brief Field hdr, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_hdr, put = __cordl_internal_set_hdr)) bool hdr;

  /// @brief Field incStep, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) float_t incStep;

  /// @brief Field incStepMult, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_incStepMult, put = __cordl_internal_set_incStepMult)) float_t incStepMult;

  /// @brief Field showAlpha, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_showAlpha, put = __cordl_internal_set_showAlpha)) bool showAlpha;

  /// @brief Field showPicker, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get_showPicker, put = __cordl_internal_set_showPicker)) bool showPicker;

  static inline ::UnityEngine::Rendering::__DebugUI__ColorField* New_ctor();

  /// @brief Method ValidateValue, addr 0x19fbdcc, size 0x50, virtual true, abstract: false, final false
  inline ::UnityEngine::Color ValidateValue(::UnityEngine::Color value);

  constexpr int32_t const& __cordl_internal_get_decimals() const;

  constexpr int32_t& __cordl_internal_get_decimals();

  constexpr bool const& __cordl_internal_get_hdr() const;

  constexpr bool& __cordl_internal_get_hdr();

  constexpr float_t const& __cordl_internal_get_incStep() const;

  constexpr float_t& __cordl_internal_get_incStep();

  constexpr float_t const& __cordl_internal_get_incStepMult() const;

  constexpr float_t& __cordl_internal_get_incStepMult();

  constexpr bool const& __cordl_internal_get_showAlpha() const;

  constexpr bool& __cordl_internal_get_showAlpha();

  constexpr bool const& __cordl_internal_get_showPicker() const;

  constexpr bool& __cordl_internal_get_showPicker();

  constexpr void __cordl_internal_set_decimals(int32_t value);

  constexpr void __cordl_internal_set_hdr(bool value);

  constexpr void __cordl_internal_set_incStep(float_t value);

  constexpr void __cordl_internal_set_incStepMult(float_t value);

  constexpr void __cordl_internal_set_showAlpha(bool value);

  constexpr void __cordl_internal_set_showPicker(bool value);

  /// @brief Method .ctor, addr 0x19fbe1c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__ColorField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__ColorField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__ColorField(__DebugUI__ColorField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__ColorField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__ColorField(__DebugUI__ColorField const&) = delete;

  /// @brief Field hdr, offset: 0x60, size: 0x1, def value: None
  bool ___hdr;

  /// @brief Field showAlpha, offset: 0x61, size: 0x1, def value: None
  bool ___showAlpha;

  /// @brief Field showPicker, offset: 0x62, size: 0x1, def value: None
  bool ___showPicker;

  /// @brief Field incStep, offset: 0x64, size: 0x4, def value: None
  float_t ___incStep;

  /// @brief Field incStepMult, offset: 0x68, size: 0x4, def value: None
  float_t ___incStepMult;

  /// @brief Field decimals, offset: 0x6c, size: 0x4, def value: None
  int32_t ___decimals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__ColorField, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__ColorField, ___hdr) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__ColorField, ___showAlpha) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__ColorField, ___showPicker) == 0x62, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__ColorField, ___incStep) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__ColorField, ___incStepMult) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__ColorField, ___decimals) == 0x6c, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::Vector2Field
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::Vector2Field*
class CORDL_TYPE __DebugUI__Vector2Field : public ::UnityEngine::Rendering::__DebugUI__Field_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field decimals, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_decimals, put = __cordl_internal_set_decimals)) int32_t decimals;

  /// @brief Field incStep, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) float_t incStep;

  /// @brief Field incStepMult, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_incStepMult, put = __cordl_internal_set_incStepMult)) float_t incStepMult;

  static inline ::UnityEngine::Rendering::__DebugUI__Vector2Field* New_ctor();

  constexpr int32_t const& __cordl_internal_get_decimals() const;

  constexpr int32_t& __cordl_internal_get_decimals();

  constexpr float_t const& __cordl_internal_get_incStep() const;

  constexpr float_t& __cordl_internal_get_incStep();

  constexpr float_t const& __cordl_internal_get_incStepMult() const;

  constexpr float_t& __cordl_internal_get_incStepMult();

  constexpr void __cordl_internal_set_decimals(int32_t value);

  constexpr void __cordl_internal_set_incStep(float_t value);

  constexpr void __cordl_internal_set_incStepMult(float_t value);

  /// @brief Method .ctor, addr 0x19fbe80, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Vector2Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Vector2Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Vector2Field(__DebugUI__Vector2Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Vector2Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Vector2Field(__DebugUI__Vector2Field const&) = delete;

  /// @brief Field incStep, offset: 0x60, size: 0x4, def value: None
  float_t ___incStep;

  /// @brief Field incStepMult, offset: 0x64, size: 0x4, def value: None
  float_t ___incStepMult;

  /// @brief Field decimals, offset: 0x68, size: 0x4, def value: None
  int32_t ___decimals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__Vector2Field, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Vector2Field, ___incStep) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Vector2Field, ___incStepMult) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Vector2Field, ___decimals) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::Vector3Field
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::Vector3Field*
class CORDL_TYPE __DebugUI__Vector3Field : public ::UnityEngine::Rendering::__DebugUI__Field_1<::UnityEngine::Vector3> {
public:
  // Declarations
  /// @brief Field decimals, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_decimals, put = __cordl_internal_set_decimals)) int32_t decimals;

  /// @brief Field incStep, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) float_t incStep;

  /// @brief Field incStepMult, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_incStepMult, put = __cordl_internal_set_incStepMult)) float_t incStepMult;

  static inline ::UnityEngine::Rendering::__DebugUI__Vector3Field* New_ctor();

  constexpr int32_t const& __cordl_internal_get_decimals() const;

  constexpr int32_t& __cordl_internal_get_decimals();

  constexpr float_t const& __cordl_internal_get_incStep() const;

  constexpr float_t& __cordl_internal_get_incStep();

  constexpr float_t const& __cordl_internal_get_incStepMult() const;

  constexpr float_t& __cordl_internal_get_incStepMult();

  constexpr void __cordl_internal_set_decimals(int32_t value);

  constexpr void __cordl_internal_set_incStep(float_t value);

  constexpr void __cordl_internal_set_incStepMult(float_t value);

  /// @brief Method .ctor, addr 0x19fbedc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Vector3Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Vector3Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Vector3Field(__DebugUI__Vector3Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Vector3Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Vector3Field(__DebugUI__Vector3Field const&) = delete;

  /// @brief Field incStep, offset: 0x60, size: 0x4, def value: None
  float_t ___incStep;

  /// @brief Field incStepMult, offset: 0x64, size: 0x4, def value: None
  float_t ___incStepMult;

  /// @brief Field decimals, offset: 0x68, size: 0x4, def value: None
  int32_t ___decimals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__Vector3Field, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Vector3Field, ___incStep) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Vector3Field, ___incStepMult) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Vector3Field, ___decimals) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::Vector4Field
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::Vector4Field*
class CORDL_TYPE __DebugUI__Vector4Field : public ::UnityEngine::Rendering::__DebugUI__Field_1<::UnityEngine::Vector4> {
public:
  // Declarations
  /// @brief Field decimals, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_decimals, put = __cordl_internal_set_decimals)) int32_t decimals;

  /// @brief Field incStep, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) float_t incStep;

  /// @brief Field incStepMult, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_incStepMult, put = __cordl_internal_set_incStepMult)) float_t incStepMult;

  static inline ::UnityEngine::Rendering::__DebugUI__Vector4Field* New_ctor();

  constexpr int32_t const& __cordl_internal_get_decimals() const;

  constexpr int32_t& __cordl_internal_get_decimals();

  constexpr float_t const& __cordl_internal_get_incStep() const;

  constexpr float_t& __cordl_internal_get_incStep();

  constexpr float_t const& __cordl_internal_get_incStepMult() const;

  constexpr float_t& __cordl_internal_get_incStepMult();

  constexpr void __cordl_internal_set_decimals(int32_t value);

  constexpr void __cordl_internal_set_incStep(float_t value);

  constexpr void __cordl_internal_set_incStepMult(float_t value);

  /// @brief Method .ctor, addr 0x19fbf38, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Vector4Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Vector4Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Vector4Field(__DebugUI__Vector4Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Vector4Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Vector4Field(__DebugUI__Vector4Field const&) = delete;

  /// @brief Field incStep, offset: 0x60, size: 0x4, def value: None
  float_t ___incStep;

  /// @brief Field incStepMult, offset: 0x64, size: 0x4, def value: None
  float_t ___incStepMult;

  /// @brief Field decimals, offset: 0x68, size: 0x4, def value: None
  int32_t ___decimals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__Vector4Field, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Vector4Field, ___incStep) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Vector4Field, ___incStepMult) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Vector4Field, ___decimals) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::Style
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DebugUI::MessageBox::Style
struct CORDL_TYPE __DebugUI__MessageBox__Style {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DebugUI__MessageBox__Style_Unwrapped
  enum struct ____DebugUI__MessageBox__Style_Unwrapped : int32_t {
    __E_Info = static_cast<int32_t>(0x0),
    __E_Warning = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DebugUI__MessageBox__Style_Unwrapped() const noexcept {
    return static_cast<____DebugUI__MessageBox__Style_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__MessageBox__Style();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DebugUI__MessageBox__Style(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Error value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__DebugUI__MessageBox__Style const Error;

  /// @brief Field Info value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__DebugUI__MessageBox__Style const Info;

  /// @brief Field Warning value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__DebugUI__MessageBox__Style const Warning;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugUI__MessageBox__Style, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugUI__MessageBox__Style, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MessageBox
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::MessageBox*
class CORDL_TYPE __DebugUI__MessageBox : public ::UnityEngine::Rendering::__DebugUI__Widget {
public:
  // Declarations
  using Style = ::GlobalNamespace::__DebugUI__MessageBox__Style;

  /// @brief Field style, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_style, put = __cordl_internal_set_style))::GlobalNamespace::__DebugUI__MessageBox__Style style;

  static inline ::UnityEngine::Rendering::__DebugUI__MessageBox* New_ctor();

  constexpr ::GlobalNamespace::__DebugUI__MessageBox__Style const& __cordl_internal_get_style() const;

  constexpr ::GlobalNamespace::__DebugUI__MessageBox__Style& __cordl_internal_get_style();

  constexpr void __cordl_internal_set_style(::GlobalNamespace::__DebugUI__MessageBox__Style value);

  /// @brief Method .ctor, addr 0x19fbf94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__MessageBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__MessageBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__MessageBox(__DebugUI__MessageBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__MessageBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__MessageBox(__DebugUI__MessageBox const&) = delete;

  /// @brief Field style, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__DebugUI__MessageBox__Style ___style;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__MessageBox, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__MessageBox, ___style) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugUI::Panel::<>c*
class CORDL_TYPE __DebugUI__Panel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__DebugUI__Panel____c* __9;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__29_0, put = setStaticF___9__29_0))::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* __9__29_0;

  static inline ::GlobalNamespace::__DebugUI__Panel____c* New_ctor();

  /// @brief Method <.ctor>b__29_0, addr 0x19fca18, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__29_0(::UnityEngine::Rendering::__DebugUI__Panel* _p0_);

  /// @brief Method .ctor, addr 0x19fca10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__DebugUI__Panel____c* getStaticF___9();

  static inline ::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* getStaticF___9__29_0();

  static inline void setStaticF___9(::GlobalNamespace::__DebugUI__Panel____c* value);

  static inline void setStaticF___9__29_0(::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Panel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Panel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Panel____c(__DebugUI__Panel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Panel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Panel____c(__DebugUI__Panel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugUI__Panel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Panel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::DebugUI::Panel*
class CORDL_TYPE __DebugUI__Panel : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__DebugUI__Panel____c;

  /// @brief Field <children>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__children_k__BackingField,
                      put = __cordl_internal_set__children_k__BackingField))::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* _children_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField))::StringW _displayName_k__BackingField;

  /// @brief Field <flags>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__flags_k__BackingField, put = __cordl_internal_set__flags_k__BackingField))::UnityEngine::Rendering::__DebugUI__Flags _flags_k__BackingField;

  /// @brief Field <groupIndex>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__groupIndex_k__BackingField, put = __cordl_internal_set__groupIndex_k__BackingField)) int32_t _groupIndex_k__BackingField;

  __declspec(property(get = get_children, put = set_children))::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* children;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_editorForceUpdate)) bool editorForceUpdate;

  __declspec(property(get = get_flags, put = set_flags))::UnityEngine::Rendering::__DebugUI__Flags flags;

  __declspec(property(get = get_groupIndex, put = set_groupIndex)) int32_t groupIndex;

  __declspec(property(get = get_isEditorOnly)) bool isEditorOnly;

  __declspec(property(get = get_isInactiveInEditor)) bool isInactiveInEditor;

  __declspec(property(get = get_isRuntimeOnly)) bool isRuntimeOnly;

  /// @brief Field onSetDirty, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onSetDirty, put = __cordl_internal_set_onSetDirty))::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* onSetDirty;

  __declspec(property(get = get_queryPath))::StringW queryPath;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::__DebugUI__Panel*>"
  constexpr operator ::System::IComparable_1<::UnityEngine::Rendering::__DebugUI__Panel*>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::__DebugUI__IContainer"
  constexpr operator ::UnityEngine::Rendering::__DebugUI__IContainer*() noexcept;

  /// @brief Method GetHashCode, addr 0x19fc6bc, size 0x2bc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::__DebugUI__Panel* New_ctor();

  /// @brief Method OnItemAdded, addr 0x19fc36c, size 0x58, virtual true, abstract: false, final false
  inline void OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                          ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e);

  /// @brief Method OnItemRemoved, addr 0x19fc664, size 0x58, virtual true, abstract: false, final false
  inline void OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                            ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e);

  /// @brief Method SetDirty, addr 0x19fc3c4, size 0x2a0, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method System.IComparable<UnityEngine.Rendering.DebugUI.Panel>.CompareTo, addr 0x19fc978, size 0x34, virtual true, abstract: false, final true
  inline int32_t System_IComparable_UnityEngine_Rendering_DebugUI_Panel__CompareTo(::UnityEngine::Rendering::__DebugUI__Panel* other);

  constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*& __cordl_internal_get__children_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*> const&
  __cordl_internal_get__children_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr ::UnityEngine::Rendering::__DebugUI__Flags const& __cordl_internal_get__flags_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::__DebugUI__Flags& __cordl_internal_get__flags_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__groupIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__groupIndex_k__BackingField();

  constexpr ::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*& __cordl_internal_get_onSetDirty();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*> const& __cordl_internal_get_onSetDirty() const;

  constexpr void __cordl_internal_set__children_k__BackingField(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* value);

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__flags_k__BackingField(::UnityEngine::Rendering::__DebugUI__Flags value);

  constexpr void __cordl_internal_set__groupIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_onSetDirty(::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* value);

  /// @brief Method .ctor, addr 0x19fc194, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onSetDirty, addr 0x19fc034, size 0xb0, virtual false, abstract: false, final false
  inline void add_onSetDirty(::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* value);

  /// @brief Method get_children, addr 0x19fc024, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* get_children();

  /// @brief Method get_displayName, addr 0x19fbfac, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_displayName();

  /// @brief Method get_editorForceUpdate, addr 0x19fc018, size 0xc, virtual false, abstract: false, final false
  inline bool get_editorForceUpdate();

  /// @brief Method get_flags, addr 0x19fbf9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::__DebugUI__Flags get_flags();

  /// @brief Method get_groupIndex, addr 0x19fbfbc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_groupIndex();

  /// @brief Method get_isEditorOnly, addr 0x19fbfd4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isEditorOnly();

  /// @brief Method get_isInactiveInEditor, addr 0x19fbfec, size 0x2c, virtual false, abstract: false, final false
  inline bool get_isInactiveInEditor();

  /// @brief Method get_isRuntimeOnly, addr 0x19fbfe0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isRuntimeOnly();

  /// @brief Method get_queryPath, addr 0x19fbfcc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_queryPath();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::__DebugUI__Panel*>"
  constexpr ::System::IComparable_1<::UnityEngine::Rendering::__DebugUI__Panel*>* i___System__IComparable_1___UnityEngine__Rendering____DebugUI__Panel__() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::__DebugUI__IContainer"
  constexpr ::UnityEngine::Rendering::__DebugUI__IContainer* i___UnityEngine__Rendering____DebugUI__IContainer() noexcept;

  /// @brief Method remove_onSetDirty, addr 0x19fc0e4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onSetDirty(::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* value);

  /// @brief Method set_children, addr 0x19fc02c, size 0x8, virtual false, abstract: false, final false
  inline void set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* value);

  /// @brief Method set_displayName, addr 0x19fbfb4, size 0x8, virtual true, abstract: false, final true
  inline void set_displayName(::StringW value);

  /// @brief Method set_flags, addr 0x19fbfa4, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::UnityEngine::Rendering::__DebugUI__Flags value);

  /// @brief Method set_groupIndex, addr 0x19fbfc4, size 0x8, virtual false, abstract: false, final false
  inline void set_groupIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUI__Panel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Panel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUI__Panel(__DebugUI__Panel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUI__Panel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUI__Panel(__DebugUI__Panel const&) = delete;

  /// @brief Field <flags>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::__DebugUI__Flags ____flags_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <groupIndex>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____groupIndex_k__BackingField;

  /// @brief Field <children>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* ____children_k__BackingField;

  /// @brief Field onSetDirty, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* ___onSetDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugUI__Panel, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Panel, ____flags_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Panel, ____displayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Panel, ____groupIndex_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Panel, ____children_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugUI__Panel, ___onSetDirty) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::DebugUI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::DebugUI*
class CORDL_TYPE DebugUI : public ::System::Object {
public:
  // Declarations
  using BitField = ::UnityEngine::Rendering::__DebugUI__BitField;

  using BoolField = ::UnityEngine::Rendering::__DebugUI__BoolField;

  using Button = ::UnityEngine::Rendering::__DebugUI__Button;

  using ColorField = ::UnityEngine::Rendering::__DebugUI__ColorField;

  using Container = ::UnityEngine::Rendering::__DebugUI__Container;

  using EnumField = ::UnityEngine::Rendering::__DebugUI__EnumField;

  using EnumUtility = ::UnityEngine::Rendering::__DebugUI__EnumUtility;

  template <typename T> using Field_1 = ::UnityEngine::Rendering::__DebugUI__Field_1<T>;

  using Flags = ::UnityEngine::Rendering::__DebugUI__Flags;

  using FloatField = ::UnityEngine::Rendering::__DebugUI__FloatField;

  using Foldout = ::UnityEngine::Rendering::__DebugUI__Foldout;

  using HBox = ::UnityEngine::Rendering::__DebugUI__HBox;

  using HistoryBoolField = ::UnityEngine::Rendering::__DebugUI__HistoryBoolField;

  using HistoryEnumField = ::UnityEngine::Rendering::__DebugUI__HistoryEnumField;

  using IContainer = ::UnityEngine::Rendering::__DebugUI__IContainer;

  using IValueField = ::UnityEngine::Rendering::__DebugUI__IValueField;

  using IntField = ::UnityEngine::Rendering::__DebugUI__IntField;

  using MessageBox = ::UnityEngine::Rendering::__DebugUI__MessageBox;

  using Panel = ::UnityEngine::Rendering::__DebugUI__Panel;

  using Table = ::UnityEngine::Rendering::__DebugUI__Table;

  using UIntField = ::UnityEngine::Rendering::__DebugUI__UIntField;

  using VBox = ::UnityEngine::Rendering::__DebugUI__VBox;

  using Value = ::UnityEngine::Rendering::__DebugUI__Value;

  using Vector2Field = ::UnityEngine::Rendering::__DebugUI__Vector2Field;

  using Vector3Field = ::UnityEngine::Rendering::__DebugUI__Vector3Field;

  using Vector4Field = ::UnityEngine::Rendering::__DebugUI__Vector4Field;

  using Widget = ::UnityEngine::Rendering::__DebugUI__Widget;

  static inline ::UnityEngine::Rendering::DebugUI* New_ctor();

  /// @brief Method .ctor, addr 0x1bd79f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI(DebugUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI(DebugUI const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugUI__MessageBox__Style, "UnityEngine.Rendering", "DebugUI/MessageBox/Style");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__Flags, "UnityEngine.Rendering", "DebugUI/Flags");
NEED_NO_BOX(::GlobalNamespace::__DebugUI__EnumField____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugUI__EnumField____c*, "UnityEngine.Rendering", "DebugUI/EnumField/<>c");
NEED_NO_BOX(::GlobalNamespace::__DebugUI__EnumUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugUI__EnumUtility____c*, "UnityEngine.Rendering", "DebugUI/EnumUtility/<>c");
NEED_NO_BOX(::GlobalNamespace::__DebugUI__Panel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugUI__Panel____c*, "UnityEngine.Rendering", "DebugUI/Panel/<>c");
NEED_NO_BOX(::GlobalNamespace::__DebugUI__Table__Row);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugUI__Table__Row*, "UnityEngine.Rendering", "DebugUI/Table/Row");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI*, "UnityEngine.Rendering", "DebugUI");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__BitField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__BitField*, "UnityEngine.Rendering", "DebugUI/BitField");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__BoolField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__BoolField*, "UnityEngine.Rendering", "DebugUI/BoolField");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__Button);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__Button*, "UnityEngine.Rendering", "DebugUI/Button");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__ColorField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__ColorField*, "UnityEngine.Rendering", "DebugUI/ColorField");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__Container);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__Container*, "UnityEngine.Rendering", "DebugUI/Container");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__EnumField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__EnumField*, "UnityEngine.Rendering", "DebugUI/EnumField");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__EnumUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__EnumUtility*, "UnityEngine.Rendering", "DebugUI/EnumUtility");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::__DebugUI__Field_1, "UnityEngine.Rendering", "DebugUI/Field`1");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__FloatField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__FloatField*, "UnityEngine.Rendering", "DebugUI/FloatField");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__Foldout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__Foldout*, "UnityEngine.Rendering", "DebugUI/Foldout");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__HBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__HBox*, "UnityEngine.Rendering", "DebugUI/HBox");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__HistoryBoolField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__HistoryBoolField*, "UnityEngine.Rendering", "DebugUI/HistoryBoolField");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__HistoryEnumField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__HistoryEnumField*, "UnityEngine.Rendering", "DebugUI/HistoryEnumField");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__IContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__IContainer*, "UnityEngine.Rendering", "DebugUI/IContainer");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__IValueField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__IValueField*, "UnityEngine.Rendering", "DebugUI/IValueField");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__IntField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__IntField*, "UnityEngine.Rendering", "DebugUI/IntField");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__MessageBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__MessageBox*, "UnityEngine.Rendering", "DebugUI/MessageBox");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__Panel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__Panel*, "UnityEngine.Rendering", "DebugUI/Panel");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__Table);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__Table*, "UnityEngine.Rendering", "DebugUI/Table");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__UIntField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__UIntField*, "UnityEngine.Rendering", "DebugUI/UIntField");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__VBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__VBox*, "UnityEngine.Rendering", "DebugUI/VBox");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__Value);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__Value*, "UnityEngine.Rendering", "DebugUI/Value");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__Vector2Field);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__Vector2Field*, "UnityEngine.Rendering", "DebugUI/Vector2Field");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__Vector3Field);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__Vector3Field*, "UnityEngine.Rendering", "DebugUI/Vector3Field");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__Vector4Field);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__Vector4Field*, "UnityEngine.Rendering", "DebugUI/Vector4Field");
NEED_NO_BOX(::UnityEngine::Rendering::__DebugUI__Widget);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugUI__Widget*, "UnityEngine.Rendering", "DebugUI/Widget");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem, "UnityEngine.Rendering", "DebugUI/Foldout/ContextMenuItem");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "UnityEngine.Rendering", "DebugUI/Widget/NameAndTooltip");
