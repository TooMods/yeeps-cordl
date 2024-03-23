#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerToggle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUIHandlerToggleHistory)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::UI {
class __DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerToggleHistory;
}
namespace UnityEngine::Rendering::UI {
class __DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory);
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4);
// Type: ::<RefreshAfterSanitization>d__4
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::DebugUIHandlerToggleHistory::<RefreshAfterSanitization>d__4*
class CORDL_TYPE __DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1d98370, size 0xa8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Rendering::UI::__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1d98418, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1d98420, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1d98460, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1d9836c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory> value);

  /// @brief Method .ctor, addr 0x1d98324, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4(__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4(__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4, _____4__this) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
// Type: UnityEngine.Rendering.UI::DebugUIHandlerToggleHistory
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.UI::DebugUIHandlerToggleHistory*
class CORDL_TYPE DebugUIHandlerToggleHistory : public ::UnityEngine::Rendering::UI::DebugUIHandlerToggle {
public:
  // Declarations
  using _RefreshAfterSanitization_d__4 = ::UnityEngine::Rendering::UI::__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4;

  /// @brief Field historyToggles, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_historyToggles,
                      put = __cordl_internal_set_historyToggles))::ArrayW<::UnityW<::UnityEngine::UI::Toggle>, ::Array<::UnityW<::UnityEngine::UI::Toggle>>*> historyToggles;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory* New_ctor();

  /// @brief Method RefreshAfterSanitization, addr 0x1d982bc, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RefreshAfterSanitization();

  /// @brief Method SetWidget, addr 0x1d97d88, size 0x3a4, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::__DebugUI__Widget* widget);

  /// @brief Method UpdateValueLabel, addr 0x1d9812c, size 0x190, virtual true, abstract: false, final false
  inline void UpdateValueLabel();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>, ::Array<::UnityW<::UnityEngine::UI::Toggle>>*> const& __cordl_internal_get_historyToggles() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>, ::Array<::UnityW<::UnityEngine::UI::Toggle>>*>& __cordl_internal_get_historyToggles();

  constexpr void __cordl_internal_set_historyToggles(::ArrayW<::UnityW<::UnityEngine::UI::Toggle>, ::Array<::UnityW<::UnityEngine::UI::Toggle>>*> value);

  /// @brief Method .ctor, addr 0x1d9834c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerToggleHistory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerToggleHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerToggleHistory(DebugUIHandlerToggleHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerToggleHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerToggleHistory(DebugUIHandlerToggleHistory const&) = delete;

  /// @brief Field historyToggles, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>, ::Array<::UnityW<::UnityEngine::UI::Toggle>>*> ___historyToggles;

  /// @brief Field xDecal offset 0xffffffff size 0x4
  static constexpr float_t xDecal{ 60.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory, ___historyToggles) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory*, "UnityEngine.Rendering.UI", "DebugUIHandlerToggleHistory");
NEED_NO_BOX(::UnityEngine::Rendering::UI::__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::__DebugUIHandlerToggleHistory___RefreshAfterSanitization_d__4*, "UnityEngine.Rendering.UI",
                       "DebugUIHandlerToggleHistory/<RefreshAfterSanitization>d__4");
