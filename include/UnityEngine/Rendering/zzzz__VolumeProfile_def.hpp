#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeProfile)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
class __VolumeProfile____c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine::Rendering {
class __VolumeProfile____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeProfile);
MARK_REF_PTR_T(::UnityEngine::Rendering::__VolumeProfile____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::VolumeProfile::<>c*
class CORDL_TYPE __VolumeProfile____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__VolumeProfile____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* __9__2_0;

  static inline ::UnityEngine::Rendering::__VolumeProfile____c* New_ctor();

  /// @brief Method <OnEnable>b__2_0, addr 0x1d901d0, size 0x5c, virtual false, abstract: false, final false
  inline bool _OnEnable_b__2_0(::UnityEngine::Rendering::VolumeComponent* x);

  /// @brief Method .ctor, addr 0x1d901c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::__VolumeProfile____c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* getStaticF___9__2_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::__VolumeProfile____c* value);

  static inline void setStaticF___9__2_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VolumeProfile____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VolumeProfile____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VolumeProfile____c(__VolumeProfile____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VolumeProfile____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VolumeProfile____c(__VolumeProfile____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__VolumeProfile____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::VolumeProfile
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::VolumeProfile*
class CORDL_TYPE VolumeProfile : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::__VolumeProfile____c;

  /// @brief Field components, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_components,
                      put = __cordl_internal_set_components))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* components;

  /// @brief Field isDirty, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isDirty, put = __cordl_internal_set_isDirty)) bool isDirty;

  /// @brief Method Add, addr 0x17d7d40, size 0x184, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> Add(::System::Type* type, bool overrides);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Add(bool overrides);

  /// @brief Method GetComponentListHashCode, addr 0x17d83d8, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetComponentListHashCode();

  /// @brief Method GetHashCode, addr 0x17d832c, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Has, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool Has();

  /// @brief Method Has, addr 0x17d7ec4, size 0x1b0, virtual false, abstract: false, final false
  inline bool Has(::System::Type* type);

  /// @brief Method HasSubclassOf, addr 0x17d818c, size 0x1a0, virtual false, abstract: false, final false
  inline bool HasSubclassOf(::System::Type* type);

  static inline ::UnityEngine::Rendering::VolumeProfile* New_ctor();

  /// @brief Method OnDisable, addr 0x17d7c50, size 0xe4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x17d7b50, size 0x100, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Remove();

  /// @brief Method Remove, addr 0x17d8074, size 0x118, virtual false, abstract: false, final false
  inline void Remove(::System::Type* type);

  /// @brief Method Reset, addr 0x17d7d34, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Sanitize, addr 0x17d8490, size 0xf8, virtual false, abstract: false, final false
  inline void Sanitize();

  /// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGet(ByRef<T> component);

  /// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGet(::System::Type* type, ByRef<T> component);

  /// @brief Method TryGetAllSubclassOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetAllSubclassOf(::System::Type* type, ::System::Collections::Generic::List_1<T>* result);

  /// @brief Method TryGetSubclassOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetSubclassOf(::System::Type* type, ByRef<T> component);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*& __cordl_internal_get_components();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*> const& __cordl_internal_get_components() const;

  constexpr bool const& __cordl_internal_get_isDirty() const;

  constexpr bool& __cordl_internal_get_isDirty();

  constexpr void __cordl_internal_set_components(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value);

  constexpr void __cordl_internal_set_isDirty(bool value);

  /// @brief Method .ctor, addr 0x17d8588, size 0x31d20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeProfile(VolumeProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeProfile(VolumeProfile const&) = delete;

  /// @brief Field components, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* ___components;

  /// @brief Field isDirty, offset: 0x20, size: 0x1, def value: None
  bool ___isDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeProfile, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeProfile, ___components) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeProfile, ___isDirty) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeProfile*, "UnityEngine.Rendering", "VolumeProfile");
NEED_NO_BOX(::UnityEngine::Rendering::__VolumeProfile____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__VolumeProfile____c*, "UnityEngine.Rendering", "VolumeProfile/<>c");
