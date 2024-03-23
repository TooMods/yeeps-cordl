#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__IRenderGraphResourcePool_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphResourcePool_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename Type> struct __RenderGraphResourcePool_1__ResourceLogInfo;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename Type> class __RenderGraphResourcePool_1____c;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename Type> class RenderGraphResourcePool_1;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename Type> class __RenderGraphResourcePool_1____c;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename Type> struct __RenderGraphResourcePool_1__ResourceLogInfo;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c);
MARK_GEN_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo);
// Type: ::ResourceLogInfo
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// cpp template
template <typename Type>
// Is value type: true
// CS Name: ::RenderGraphResourcePool`1::ResourceLogInfo<Type>
struct CORDL_TYPE __RenderGraphResourcePool_1__ResourceLogInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraphResourcePool_1__ResourceLogInfo();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr __RenderGraphResourcePool_1__ResourceLogInfo(::StringW name, int64_t size) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field size, offset: 0x8, size: 0x8, def value: None
  int64_t size;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// cpp template
template <typename Type>
// Is value type: false
// CS Name: ::RenderGraphResourcePool`1::<>c<Type>*
class CORDL_TYPE __RenderGraphResourcePool_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__17_0,
               put = setStaticF___9__17_0))::System::Comparison_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>>* __9__17_0;

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>* New_ctor();

  /// @brief Method <LogResources>b__17_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t _LogResources_b__17_0(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type> a,
                                       ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type> b);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>>* getStaticF___9__17_0();

  static inline void setStaticF___9(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>* value);

  static inline void setStaticF___9__17_0(::System::Comparison_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraphResourcePool_1____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphResourcePool_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderGraphResourcePool_1____c(__RenderGraphResourcePool_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphResourcePool_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderGraphResourcePool_1____c(__RenderGraphResourcePool_1____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphResourcePool`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// cpp template
template <typename Type>
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphResourcePool`1<Type>*
class CORDL_TYPE RenderGraphResourcePool_1 : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool {
public:
  // Declarations
  using ResourceLogInfo = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>;

  using __c = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>;

  /// @brief Field m_FrameAllocatedResources, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FrameAllocatedResources,
                      put = __cordl_internal_set_m_FrameAllocatedResources))::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>* m_FrameAllocatedResources;

  /// @brief Field m_RemoveList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RemoveList, put = __cordl_internal_set_m_RemoveList))::System::Collections::Generic::List_1<int32_t>* m_RemoveList;

  /// @brief Field m_ResourcePool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourcePool, put = __cordl_internal_set_m_ResourcePool))::System::Collections::Generic::Dictionary_2<
      int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>* m_ResourcePool;

  /// @brief Field s_CurrentFrameIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CurrentFrameIndex, put = setStaticF_s_CurrentFrameIndex)) int32_t s_CurrentFrameIndex;

  /// @brief Method CheckFrameAllocation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CheckFrameAllocation(bool onException, int32_t frameIndex);

  /// @brief Method Cleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Cleanup();

  /// @brief Method GetResourceName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetResourceName(Type res);

  /// @brief Method GetResourceSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t GetResourceSize(Type res);

  /// @brief Method GetResourceTypeName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetResourceTypeName();

  /// @brief Method GetSortIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetSortIndex(Type res);

  /// @brief Method LogResources, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogResources(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>* New_ctor();

  /// @brief Method RegisterFrameAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RegisterFrameAllocation(int32_t hash, Type value);

  /// @brief Method ReleaseInternalResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ReleaseInternalResource(Type res);

  /// @brief Method ReleaseResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReleaseResource(int32_t hash, Type resource, int32_t currentFrameIndex);

  /// @brief Method ShouldReleaseResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool ShouldReleaseResource(int32_t lastUsedFrameIndex, int32_t currentFrameIndex);

  /// @brief Method TryGetResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetResource(int32_t hashCode, ByRef<Type> resource);

  /// @brief Method UnregisterFrameAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UnregisterFrameAllocation(int32_t hash, Type value);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>*& __cordl_internal_get_m_FrameAllocatedResources();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>*> const& __cordl_internal_get_m_FrameAllocatedResources() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_RemoveList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_RemoveList() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>*&
  __cordl_internal_get_m_ResourcePool();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>*> const&
  __cordl_internal_get_m_ResourcePool() const;

  constexpr void __cordl_internal_set_m_FrameAllocatedResources(::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>* value);

  constexpr void __cordl_internal_set_m_RemoveList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void
  __cordl_internal_set_m_ResourcePool(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_s_CurrentFrameIndex();

  static inline void setStaticF_s_CurrentFrameIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourcePool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourcePool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourcePool_1(RenderGraphResourcePool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourcePool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourcePool_1(RenderGraphResourcePool_1 const&) = delete;

  /// @brief Field m_ResourcePool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>* ___m_ResourcePool;

  /// @brief Field m_RemoveList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_RemoveList;

  /// @brief Field m_FrameAllocatedResources, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>* ___m_FrameAllocatedResources;

  /// @brief Field kStaleResourceLifetime offset 0xffffffff size 0x4
  static constexpr int32_t kStaleResourceLifetime{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                                     "RenderGraphResourcePool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                                     "RenderGraphResourcePool`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                                      "RenderGraphResourcePool`1/ResourceLogInfo");
