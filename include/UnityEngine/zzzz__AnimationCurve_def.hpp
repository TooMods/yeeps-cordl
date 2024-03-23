#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationCurve)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Keyframe;
}
namespace UnityEngine {
struct WrapMode;
}
// Forward declare root types
namespace UnityEngine {
class AnimationCurve;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimationCurve);
// Type: UnityEngine::AnimationCurve
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AnimationCurve*
class CORDL_TYPE AnimationCurve : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item))::UnityEngine::Keyframe Item[];

  __declspec(property(get = get_keys, put = set_keys))::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys;

  __declspec(property(get = get_length)) int32_t length;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  __declspec(property(get = get_postWrapMode))::UnityEngine::WrapMode postWrapMode;

  __declspec(property(get = get_preWrapMode))::UnityEngine::WrapMode preWrapMode;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::AnimationCurve*>*() noexcept;

  /// @brief Method AddKey, addr 0x27e24ec, size 0x5c, virtual false, abstract: false, final false
  inline int32_t AddKey(::UnityEngine::Keyframe key);

  /// @brief Method AddKey, addr 0x27e2498, size 0x54, virtual false, abstract: false, final false
  inline int32_t AddKey(float_t time, float_t value);

  /// @brief Method AddKey_Internal, addr 0x27e2548, size 0x44, virtual false, abstract: false, final false
  inline int32_t AddKey_Internal(::UnityEngine::Keyframe key);

  /// @brief Method AddKey_Internal_Injected, addr 0x27e258c, size 0x44, virtual false, abstract: false, final false
  inline int32_t AddKey_Internal_Injected(ByRef<::UnityEngine::Keyframe> key);

  /// @brief Method EaseInOut, addr 0x27e2a44, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* EaseInOut(float_t timeStart, float_t valueStart, float_t timeEnd, float_t valueEnd);

  /// @brief Method Equals, addr 0x27e2c3c, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x27e2d04, size 0xc8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::AnimationCurve* other);

  /// @brief Method Evaluate, addr 0x27e234c, size 0x4c, virtual false, abstract: false, final false
  inline float_t Evaluate(float_t time);

  /// @brief Method Finalize, addr 0x27e2290, size 0xbc, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetHashCode, addr 0x27e2dcc, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetKey, addr 0x27e2754, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Keyframe GetKey(int32_t index);

  /// @brief Method GetKey_Injected, addr 0x27e280c, size 0x54, virtual false, abstract: false, final false
  inline void GetKey_Injected(int32_t index, ByRef<::UnityEngine::Keyframe> ret);

  /// @brief Method GetKeys, addr 0x27e23d4, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> GetKeys();

  /// @brief Method Internal_Create, addr 0x27e2210, size 0x3c, virtual false, abstract: false, final false
  static inline void* Internal_Create(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys);

  /// @brief Method Internal_Destroy, addr 0x27e21d4, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(void* ptr);

  /// @brief Method Internal_Equals, addr 0x27e224c, size 0x44, virtual false, abstract: false, final false
  inline bool Internal_Equals(void* other);

  /// @brief Method Linear, addr 0x27e28b4, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* Linear(float_t timeStart, float_t valueStart, float_t timeEnd, float_t valueEnd);

  /// @brief Method MoveKey, addr 0x27e25d0, size 0x54, virtual false, abstract: false, final false
  inline int32_t MoveKey(int32_t index, ::UnityEngine::Keyframe key);

  /// @brief Method MoveKey_Injected, addr 0x27e2624, size 0x54, virtual false, abstract: false, final false
  inline int32_t MoveKey_Injected(int32_t index, ByRef<::UnityEngine::Keyframe> key);

  static inline ::UnityEngine::AnimationCurve* New_ctor();

  static inline ::UnityEngine::AnimationCurve* New_ctor(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys);

  /// @brief Method RemoveKey, addr 0x27e2678, size 0x44, virtual false, abstract: false, final false
  inline void RemoveKey(int32_t index);

  /// @brief Method SetKeys, addr 0x27e2454, size 0x44, virtual false, abstract: false, final false
  inline void SetKeys(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys);

  /// @brief Method SmoothTangents, addr 0x27e2860, size 0x54, virtual false, abstract: false, final false
  inline void SmoothTangents(int32_t index, float_t weight);

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x27e2bf0, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x27e29f4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys);

  /// @brief Method get_Item, addr 0x27e26bc, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Keyframe get_Item(int32_t index);

  /// @brief Method get_keys, addr 0x27e2398, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> get_keys();

  /// @brief Method get_length, addr 0x27e27d0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Method get_postWrapMode, addr 0x27e2bb4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::WrapMode get_postWrapMode();

  /// @brief Method get_preWrapMode, addr 0x27e2b78, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::WrapMode get_preWrapMode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
  constexpr ::System::IEquatable_1<::UnityEngine::AnimationCurve*>* i___System__IEquatable_1___UnityEngine__AnimationCurve__() noexcept;

  /// @brief Method set_keys, addr 0x27e2410, size 0x44, virtual false, abstract: false, final false
  inline void set_keys(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationCurve(AnimationCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationCurve(AnimationCurve const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationCurve, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AnimationCurve, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationCurve);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationCurve*, "UnityEngine", "AnimationCurve");
