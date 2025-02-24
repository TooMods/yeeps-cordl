#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingGroup)
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct CullingGroupEvent;
}
namespace UnityEngine {
struct CullingQueryOptions;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class __CullingGroup__StateChanged;
}
// Forward declare root types
namespace UnityEngine {
class CullingGroup;
}
namespace UnityEngine {
class __CullingGroup__StateChanged;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CullingGroup);
MARK_REF_PTR_T(::UnityEngine::__CullingGroup__StateChanged);
// Type: ::StateChanged
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::CullingGroup::StateChanged*
class CORDL_TYPE __CullingGroup__StateChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x27fc450, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::CullingGroupEvent sphere);

  static inline ::UnityEngine::__CullingGroup__StateChanged* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fc38c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CullingGroup__StateChanged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CullingGroup__StateChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CullingGroup__StateChanged(__CullingGroup__StateChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CullingGroup__StateChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CullingGroup__StateChanged(__CullingGroup__StateChanged const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__CullingGroup__StateChanged, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::CullingGroup
// SizeInfo { instance_size: 32, native_size: 16, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::CullingGroup*
class CORDL_TYPE CullingGroup : public ::System::Object {
public:
  // Declarations
  using StateChanged = ::UnityEngine::__CullingGroup__StateChanged;

  /// @brief Field m_OnStateChanged, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnStateChanged, put = __cordl_internal_set_m_OnStateChanged))::UnityEngine::__CullingGroup__StateChanged* m_OnStateChanged;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  __declspec(property(put = set_targetCamera))::UnityW<::UnityEngine::Camera> targetCamera;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x27fc034, size 0x78, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeInternal, addr 0x27fbff8, size 0x3c, virtual false, abstract: false, final false
  inline void DisposeInternal();

  /// @brief Method Finalize, addr 0x27fbebc, size 0x100, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FinalizerFailure, addr 0x27fbfbc, size 0x3c, virtual false, abstract: false, final false
  inline void FinalizerFailure();

  /// @brief Method Init, addr 0x27fbe80, size 0x3c, virtual false, abstract: false, final false
  static inline void* Init(::System::Object* scripting);

  static inline ::UnityEngine::CullingGroup* New_ctor();

  /// @brief Method QueryIndices, addr 0x27fc1dc, size 0x74, virtual false, abstract: false, final false
  inline int32_t QueryIndices(bool visible, int32_t distanceIndex, ::UnityEngine::CullingQueryOptions options, ::ArrayW<int32_t, ::Array<int32_t>*> result, int32_t firstIndex);

  /// @brief Method QueryIndices, addr 0x27fc178, size 0x64, virtual false, abstract: false, final false
  inline int32_t QueryIndices(bool visible, ::ArrayW<int32_t, ::Array<int32_t>*> result, int32_t firstIndex);

  /// @brief Method SendEvents, addr 0x27fc330, size 0x5c, virtual false, abstract: false, final false
  static inline void SendEvents(::UnityEngine::CullingGroup* cullingGroup, void* eventsPtr, int32_t count);

  /// @brief Method SetBoundingDistances, addr 0x27fc250, size 0x44, virtual false, abstract: false, final false
  inline void SetBoundingDistances(::ArrayW<float_t, ::Array<float_t>*> distances);

  /// @brief Method SetBoundingSphereCount, addr 0x27fc134, size 0x44, virtual false, abstract: false, final false
  inline void SetBoundingSphereCount(int32_t count);

  /// @brief Method SetBoundingSpheres, addr 0x27fc0f0, size 0x44, virtual false, abstract: false, final false
  inline void SetBoundingSpheres(::ArrayW<::UnityEngine::BoundingSphere, ::Array<::UnityEngine::BoundingSphere>*> array);

  /// @brief Method SetDistanceReferencePoint, addr 0x27fc32c, size 0x4, virtual false, abstract: false, final false
  inline void SetDistanceReferencePoint(::UnityEngine::Vector3 point);

  /// @brief Method SetDistanceReferencePoint_InternalVector3, addr 0x27fc294, size 0x54, virtual false, abstract: false, final false
  inline void SetDistanceReferencePoint_InternalVector3(::UnityEngine::Vector3 point);

  /// @brief Method SetDistanceReferencePoint_InternalVector3_Injected, addr 0x27fc2e8, size 0x44, virtual false, abstract: false, final false
  inline void SetDistanceReferencePoint_InternalVector3_Injected(ByRef<::UnityEngine::Vector3> point);

  constexpr ::UnityEngine::__CullingGroup__StateChanged*& __cordl_internal_get_m_OnStateChanged();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__CullingGroup__StateChanged*> const& __cordl_internal_get_m_OnStateChanged() const;

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_OnStateChanged(::UnityEngine::__CullingGroup__StateChanged* value);

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x27fbe30, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_targetCamera, addr 0x27fc0ac, size 0x44, virtual false, abstract: false, final false
  inline void set_targetCamera(::UnityEngine::Camera* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CullingGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CullingGroup(CullingGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CullingGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CullingGroup(CullingGroup const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  /// @brief Field m_OnStateChanged, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::__CullingGroup__StateChanged* ___m_OnStateChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CullingGroup, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CullingGroup, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CullingGroup, ___m_OnStateChanged) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CullingGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CullingGroup*, "UnityEngine", "CullingGroup");
NEED_NO_BOX(::UnityEngine::__CullingGroup__StateChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__CullingGroup__StateChanged*, "UnityEngine", "CullingGroup/StateChanged");
