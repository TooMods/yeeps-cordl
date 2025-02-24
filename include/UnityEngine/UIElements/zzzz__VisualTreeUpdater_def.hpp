#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeUpdater)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VisualTreeUpdatePhase;
}
namespace UnityEngine::UIElements {
class __VisualTreeUpdater__UpdaterArray;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeUpdater;
}
namespace UnityEngine::UIElements {
class __VisualTreeUpdater__UpdaterArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeUpdater);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray);
// Type: ::UpdaterArray
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::VisualTreeUpdater::UpdaterArray*
class CORDL_TYPE __VisualTreeUpdater__UpdaterArray : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item))::UnityEngine::UIElements::IVisualTreeUpdater* Item[];

  __declspec(property(get = get_Item, put = set_Item))::UnityEngine::UIElements::IVisualTreeUpdater* Item[];

  /// @brief Field m_VisualTreeUpdaters, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_VisualTreeUpdaters,
               put = __cordl_internal_set_m_VisualTreeUpdaters))::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> m_VisualTreeUpdaters;

  static inline ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* New_ctor();

  constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> const& __cordl_internal_get_m_VisualTreeUpdaters() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>& __cordl_internal_get_m_VisualTreeUpdaters();

  constexpr void __cordl_internal_set_m_VisualTreeUpdaters(::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> value);

  /// @brief Method .ctor, addr 0x209432c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x2094590, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x2094818, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method set_Item, addr 0x2094948, size 0x64, virtual false, abstract: false, final false
  inline void set_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase, ::UnityEngine::UIElements::IVisualTreeUpdater* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeUpdater__UpdaterArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeUpdater__UpdaterArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualTreeUpdater__UpdaterArray(__VisualTreeUpdater__UpdaterArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeUpdater__UpdaterArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualTreeUpdater__UpdaterArray(__VisualTreeUpdater__UpdaterArray const&) = delete;

  /// @brief Field m_VisualTreeUpdaters, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> ___m_VisualTreeUpdaters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray, ___m_VisualTreeUpdaters) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualTreeUpdater
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::VisualTreeUpdater*
class CORDL_TYPE VisualTreeUpdater : public ::System::Object {
public:
  // Declarations
  using UpdaterArray = ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray;

  /// @brief Field m_Panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel))::UnityEngine::UIElements::BaseVisualElementPanel* m_Panel;

  /// @brief Field m_UpdaterArray, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdaterArray, put = __cordl_internal_set_m_UpdaterArray))::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* m_UpdaterArray;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x20944c4, size 0xcc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetUpdater, addr 0x2094930, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  static inline ::UnityEngine::UIElements::VisualTreeUpdater* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method OnVersionChanged, addr 0x2094848, size 0xe8, virtual false, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method SetDefaultUpdaters, addr 0x2094388, size 0x13c, virtual false, abstract: false, final false
  inline void SetDefaultUpdaters();

  /// @brief Method SetUpdater, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method UpdateVisualTreePhase, addr 0x20945c0, size 0x258, virtual false, abstract: false, final false
  inline void UpdateVisualTreePhase(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get_m_Panel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVisualElementPanel*> const& __cordl_internal_get_m_Panel() const;

  constexpr ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*& __cordl_internal_get_m_UpdaterArray();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*> const& __cordl_internal_get_m_UpdaterArray() const;

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set_m_UpdaterArray(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* value);

  /// @brief Method .ctor, addr 0x20942b0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeUpdater(VisualTreeUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeUpdater(VisualTreeUpdater const&) = delete;

  /// @brief Field m_Panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ___m_Panel;

  /// @brief Field m_UpdaterArray, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* ___m_UpdaterArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeUpdater, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeUpdater, ___m_Panel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeUpdater, ___m_UpdaterArray) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeUpdater*, "UnityEngine.UIElements", "VisualTreeUpdater");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*, "UnityEngine.UIElements", "VisualTreeUpdater/UpdaterArray");
