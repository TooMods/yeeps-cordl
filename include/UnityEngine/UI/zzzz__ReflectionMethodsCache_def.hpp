#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionMethodsCache)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__GetRayIntersectionAllCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__GetRaycastNonAllocCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__Raycast2DCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__Raycast3DCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__RaycastAllCallback;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
class ReflectionMethodsCache;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__GetRayIntersectionAllCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__GetRaycastNonAllocCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__Raycast2DCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__Raycast3DCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__RaycastAllCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::ReflectionMethodsCache);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback);
// Type: ::Raycast3DCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::ReflectionMethodsCache::Raycast3DCallback*
class CORDL_TYPE __ReflectionMethodsCache__Raycast3DCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2915c3c, size 0x120, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ByRef<::UnityEngine::RaycastHit> hit, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2915d5c, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::UnityEngine::RaycastHit> hit, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2915bfc, size 0x40, virtual true, abstract: false, final false
  inline bool Invoke(::UnityEngine::Ray r, ByRef<::UnityEngine::RaycastHit> hit, float_t f, int32_t i);

  static inline ::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2915b38, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__Raycast3DCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__Raycast3DCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__Raycast3DCallback(__ReflectionMethodsCache__Raycast3DCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__Raycast3DCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__Raycast3DCallback(__ReflectionMethodsCache__Raycast3DCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::RaycastAllCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::ReflectionMethodsCache::RaycastAllCallback*
class CORDL_TYPE __ReflectionMethodsCache__RaycastAllCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2915e88, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2915f74, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2915e4c, size 0x3c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Invoke(::UnityEngine::Ray r, float_t f, int32_t i);

  static inline ::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2915d88, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__RaycastAllCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__RaycastAllCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__RaycastAllCallback(__ReflectionMethodsCache__RaycastAllCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__RaycastAllCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__RaycastAllCallback(__ReflectionMethodsCache__RaycastAllCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::GetRaycastNonAllocCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::ReflectionMethodsCache::GetRaycastNonAllocCallback*
class CORDL_TYPE __ReflectionMethodsCache__GetRaycastNonAllocCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2916080, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t f, int32_t i,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2916170, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2916044, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Invoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t f, int32_t i);

  static inline ::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2915f80, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__GetRaycastNonAllocCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRaycastNonAllocCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__GetRaycastNonAllocCallback(__ReflectionMethodsCache__GetRaycastNonAllocCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRaycastNonAllocCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__GetRaycastNonAllocCallback(__ReflectionMethodsCache__GetRaycastNonAllocCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::Raycast2DCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::ReflectionMethodsCache::Raycast2DCallback*
class CORDL_TYPE __ReflectionMethodsCache__Raycast2DCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2916270, size 0xfc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x291636c, size 0x38, virtual true, abstract: false, final false
  inline ::UnityEngine::RaycastHit2D EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x291625c, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::RaycastHit2D Invoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t f, int32_t i);

  static inline ::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2916198, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__Raycast2DCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__Raycast2DCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__Raycast2DCallback(__ReflectionMethodsCache__Raycast2DCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__Raycast2DCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__Raycast2DCallback(__ReflectionMethodsCache__Raycast2DCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::GetRayIntersectionAllCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::ReflectionMethodsCache::GetRayIntersectionAllCallback*
class CORDL_TYPE __ReflectionMethodsCache__GetRayIntersectionAllCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29164a4, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2916590, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2916468, size 0x3c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> Invoke(::UnityEngine::Ray r, float_t f, int32_t i);

  static inline ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29163a4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__GetRayIntersectionAllCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRayIntersectionAllCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__GetRayIntersectionAllCallback(__ReflectionMethodsCache__GetRayIntersectionAllCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRayIntersectionAllCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__GetRayIntersectionAllCallback(__ReflectionMethodsCache__GetRayIntersectionAllCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::GetRayIntersectionAllNonAllocCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback*
class CORDL_TYPE __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x291669c, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t f, int32_t i,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x291678c, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2916660, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Invoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t f, int32_t i);

  static inline ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x291659c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback(__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback(__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::ReflectionMethodsCache
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::ReflectionMethodsCache*
class CORDL_TYPE ReflectionMethodsCache : public ::System::Object {
public:
  // Declarations
  using GetRayIntersectionAllCallback = ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback;

  using GetRayIntersectionAllNonAllocCallback = ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback;

  using GetRaycastNonAllocCallback = ::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback;

  using Raycast2DCallback = ::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback;

  using Raycast3DCallback = ::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback;

  using RaycastAllCallback = ::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback;

  /// @brief Field getRayIntersectionAll, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_getRayIntersectionAll,
                      put = __cordl_internal_set_getRayIntersectionAll))::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback* getRayIntersectionAll;

  /// @brief Field getRayIntersectionAllNonAlloc, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_getRayIntersectionAllNonAlloc,
                      put = __cordl_internal_set_getRayIntersectionAllNonAlloc))::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback* getRayIntersectionAllNonAlloc;

  /// @brief Field getRaycastNonAlloc, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_getRaycastNonAlloc,
                      put = __cordl_internal_set_getRaycastNonAlloc))::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback* getRaycastNonAlloc;

  /// @brief Field raycast2D, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_raycast2D, put = __cordl_internal_set_raycast2D))::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback* raycast2D;

  /// @brief Field raycast3D, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_raycast3D, put = __cordl_internal_set_raycast3D))::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback* raycast3D;

  /// @brief Field raycast3DAll, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_raycast3DAll, put = __cordl_internal_set_raycast3DAll))::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback* raycast3DAll;

  /// @brief Field s_ReflectionMethodsCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ReflectionMethodsCache, put = setStaticF_s_ReflectionMethodsCache))::UnityEngine::UI::ReflectionMethodsCache* s_ReflectionMethodsCache;

  static inline ::UnityEngine::UI::ReflectionMethodsCache* New_ctor();

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback*& __cordl_internal_get_getRayIntersectionAll();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback*> const& __cordl_internal_get_getRayIntersectionAll() const;

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback*& __cordl_internal_get_getRayIntersectionAllNonAlloc();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback*> const& __cordl_internal_get_getRayIntersectionAllNonAlloc() const;

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback*& __cordl_internal_get_getRaycastNonAlloc();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback*> const& __cordl_internal_get_getRaycastNonAlloc() const;

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback*& __cordl_internal_get_raycast2D();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback*> const& __cordl_internal_get_raycast2D() const;

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback*& __cordl_internal_get_raycast3D();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback*> const& __cordl_internal_get_raycast3D() const;

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback*& __cordl_internal_get_raycast3DAll();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback*> const& __cordl_internal_get_raycast3DAll() const;

  constexpr void __cordl_internal_set_getRayIntersectionAll(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback* value);

  constexpr void __cordl_internal_set_getRayIntersectionAllNonAlloc(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback* value);

  constexpr void __cordl_internal_set_getRaycastNonAlloc(::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback* value);

  constexpr void __cordl_internal_set_raycast2D(::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback* value);

  constexpr void __cordl_internal_set_raycast3D(::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback* value);

  constexpr void __cordl_internal_set_raycast3DAll(::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback* value);

  /// @brief Method .ctor, addr 0x2914ea8, size 0xc14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::ReflectionMethodsCache* getStaticF_s_ReflectionMethodsCache();

  /// @brief Method get_Singleton, addr 0x2915abc, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UI::ReflectionMethodsCache* get_Singleton();

  static inline void setStaticF_s_ReflectionMethodsCache(::UnityEngine::UI::ReflectionMethodsCache* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionMethodsCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionMethodsCache(ReflectionMethodsCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionMethodsCache(ReflectionMethodsCache const&) = delete;

  /// @brief Field raycast3D, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback* ___raycast3D;

  /// @brief Field raycast3DAll, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback* ___raycast3DAll;

  /// @brief Field getRaycastNonAlloc, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback* ___getRaycastNonAlloc;

  /// @brief Field raycast2D, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback* ___raycast2D;

  /// @brief Field getRayIntersectionAll, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback* ___getRayIntersectionAll;

  /// @brief Field getRayIntersectionAllNonAlloc, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback* ___getRayIntersectionAllNonAlloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ReflectionMethodsCache, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___raycast3D) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___raycast3DAll) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___getRaycastNonAlloc) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___raycast2D) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___getRayIntersectionAll) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___getRayIntersectionAllNonAlloc) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::ReflectionMethodsCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ReflectionMethodsCache*, "UnityEngine.UI", "ReflectionMethodsCache");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllCallback");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRaycastNonAllocCallback");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback*, "UnityEngine.UI", "ReflectionMethodsCache/Raycast2DCallback");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback*, "UnityEngine.UI", "ReflectionMethodsCache/Raycast3DCallback");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback*, "UnityEngine.UI", "ReflectionMethodsCache/RaycastAllCallback");
