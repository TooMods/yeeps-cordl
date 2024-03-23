#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerEnumField_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUIHandlerEnumHistory)
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
class __DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerEnumHistory;
}
namespace UnityEngine::Rendering::UI {
class __DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerEnumHistory);
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4);
// Type: ::<RefreshAfterSanitization>d__4
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::DebugUIHandlerEnumHistory::<RefreshAfterSanitization>d__4*
class CORDL_TYPE __DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerEnumHistory> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1d95700, size 0xdc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Rendering::UI::__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1d957dc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1d957e4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1d95824, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1d956fc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerEnumHistory> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerEnumHistory>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerEnumHistory> value);

  /// @brief Method .ctor, addr 0x1d956b4, size 0x28, virtual false, abstract: false, final false
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
  constexpr __DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4(__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4(__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerEnumHistory> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4, _____4__this) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
// Type: UnityEngine.Rendering.UI::DebugUIHandlerEnumHistory
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.UI::DebugUIHandlerEnumHistory*
class CORDL_TYPE DebugUIHandlerEnumHistory : public ::UnityEngine::Rendering::UI::DebugUIHandlerEnumField {
public:
  // Declarations
  using _RefreshAfterSanitization_d__4 = ::UnityEngine::Rendering::UI::__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4;

  /// @brief Field historyValues, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_historyValues,
                      put = __cordl_internal_set_historyValues))::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> historyValues;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerEnumHistory* New_ctor();

  /// @brief Method RefreshAfterSanitization, addr 0x1d9564c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RefreshAfterSanitization();

  /// @brief Method SetWidget, addr 0x1d951cc, size 0x264, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::__DebugUI__Widget* widget);

  /// @brief Method UpdateValueLabel, addr 0x1d95430, size 0x21c, virtual true, abstract: false, final false
  inline void UpdateValueLabel();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> const& __cordl_internal_get_historyValues() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*>& __cordl_internal_get_historyValues();

  constexpr void __cordl_internal_set_historyValues(::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> value);

  /// @brief Method .ctor, addr 0x1d956dc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerEnumHistory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerEnumHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerEnumHistory(DebugUIHandlerEnumHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerEnumHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerEnumHistory(DebugUIHandlerEnumHistory const&) = delete;

  /// @brief Field historyValues, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> ___historyValues;

  /// @brief Field xDecal offset 0xffffffff size 0x4
  static constexpr float_t xDecal{ 60.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerEnumHistory, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerEnumHistory, ___historyValues) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerEnumHistory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerEnumHistory*, "UnityEngine.Rendering.UI", "DebugUIHandlerEnumHistory");
NEED_NO_BOX(::UnityEngine::Rendering::UI::__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::__DebugUIHandlerEnumHistory___RefreshAfterSanitization_d__4*, "UnityEngine.Rendering.UI",
                       "DebugUIHandlerEnumHistory/<RefreshAfterSanitization>d__4");
