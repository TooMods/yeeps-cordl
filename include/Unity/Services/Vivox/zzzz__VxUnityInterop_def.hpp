#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VxUnityInterop)
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
namespace Unity::Services::Vivox {
class __VxUnityInterop___VivoxUnityRun_d__7;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VxUnityInterop;
}
namespace Unity::Services::Vivox {
class __VxUnityInterop___VivoxUnityRun_d__7;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VxUnityInterop);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VxUnityInterop___VivoxUnityRun_d__7);
// Type: ::<VivoxUnityRun>d__7
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VxUnityInterop::<VivoxUnityRun>d__7*
class CORDL_TYPE __VxUnityInterop___VivoxUnityRun_d__7 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1700a48, size 0x164, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Unity::Services::Vivox::__VxUnityInterop___VivoxUnityRun_d__7* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1700bac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1700bb4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1700bf4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1700a44, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  /// @brief Method .ctor, addr 0x1700688, size 0x28, virtual false, abstract: false, final false
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
  constexpr __VxUnityInterop___VivoxUnityRun_d__7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VxUnityInterop___VivoxUnityRun_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VxUnityInterop___VivoxUnityRun_d__7(__VxUnityInterop___VivoxUnityRun_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VxUnityInterop___VivoxUnityRun_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VxUnityInterop___VivoxUnityRun_d__7(__VxUnityInterop___VivoxUnityRun_d__7 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VxUnityInterop___VivoxUnityRun_d__7, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VxUnityInterop___VivoxUnityRun_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VxUnityInterop___VivoxUnityRun_d__7, _____2__current) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::VxUnityInterop
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VxUnityInterop*
class CORDL_TYPE VxUnityInterop : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _VivoxUnityRun_d__7 = ::Unity::Services::Vivox::__VxUnityInterop___VivoxUnityRun_d__7;

  /// @brief Field m_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Instance, put = setStaticF_m_Instance))::UnityW<::Unity::Services::Vivox::VxUnityInterop> m_Instance;

  /// @brief Field m_Lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Lock, put = setStaticF_m_Lock))::System::Object* m_Lock;

  /// @brief Field quitting, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_quitting, put = __cordl_internal_set_quitting)) bool quitting;

  static inline ::Unity::Services::Vivox::VxUnityInterop* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x17005ac, size 0x5c, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnDestroy, addr 0x17006b0, size 0x314, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method StartVivoxUnity, addr 0x1700608, size 0x20, virtual true, abstract: false, final false
  inline void StartVivoxUnity();

  /// @brief Method VivoxUnityRun, addr 0x1700628, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* VivoxUnityRun();

  constexpr bool const& __cordl_internal_get_quitting() const;

  constexpr bool& __cordl_internal_get_quitting();

  constexpr void __cordl_internal_set_quitting(bool value);

  /// @brief Method .ctor, addr 0x17009c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::Unity::Services::Vivox::VxUnityInterop> getStaticF_m_Instance();

  static inline ::System::Object* getStaticF_m_Lock();

  /// @brief Method get_Instance, addr 0x16fe5c8, size 0x348, virtual false, abstract: false, final false
  static inline ::UnityW<::Unity::Services::Vivox::VxUnityInterop> get_Instance();

  static inline void setStaticF_m_Instance(::UnityW<::Unity::Services::Vivox::VxUnityInterop> value);

  static inline void setStaticF_m_Lock(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VxUnityInterop();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VxUnityInterop", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VxUnityInterop(VxUnityInterop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VxUnityInterop", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VxUnityInterop(VxUnityInterop const&) = delete;

  /// @brief Field quitting, offset: 0x18, size: 0x1, def value: None
  bool ___quitting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VxUnityInterop, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VxUnityInterop, ___quitting) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VxUnityInterop);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VxUnityInterop*, "Unity.Services.Vivox", "VxUnityInterop");
NEED_NO_BOX(::Unity::Services::Vivox::__VxUnityInterop___VivoxUnityRun_d__7);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VxUnityInterop___VivoxUnityRun_d__7*, "Unity.Services.Vivox", "VxUnityInterop/<VivoxUnityRun>d__7");
