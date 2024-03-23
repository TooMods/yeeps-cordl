#pragma once
#include "GlobalNamespace/zzzz__ColliderBatcher_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "GlobalNamespace/zzzz__ColliderBatch_def.hpp"
#include "GlobalNamespace/zzzz__ColliderBatch_def.hpp"
#include "GlobalNamespace/zzzz__ColliderBatcher_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::*)()>(
    &::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x275d834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0._Bake_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::*)()>(
    &::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::_Bake_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x275e1b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0*>::get(), "<Bake>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColliderBatch*& GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColliderBatch*> const& GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_set___4__this(::GlobalNamespace::ColliderBatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr Il2CppObject*& GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_get_occupiedCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occupiedCells;
}
constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> const& GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_get_occupiedCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occupiedCells;
}
constexpr void GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_set_occupiedCells(Il2CppObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___occupiedCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_get_yLayerHasOccupiedCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yLayerHasOccupiedCells;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_get_yLayerHasOccupiedCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yLayerHasOccupiedCells;
}
constexpr void GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_set_yLayerHasOccupiedCells(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___yLayerHasOccupiedCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_get_occupiedCellCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occupiedCellCount;
}
constexpr int32_t const& GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_get_occupiedCellCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occupiedCellCount;
}
constexpr void GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_set_occupiedCellCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occupiedCellCount = value;
}
constexpr ::GlobalNamespace::__ColliderBatcher__ColliderBatchData& GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_get_dataCopy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataCopy;
}
constexpr ::GlobalNamespace::__ColliderBatcher__ColliderBatchData const& GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_get_dataCopy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataCopy;
}
constexpr void GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__cordl_internal_set_dataCopy(::GlobalNamespace::__ColliderBatcher__ColliderBatchData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataCopy = value;
}
inline ::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0* GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0*>());
}
inline void GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::_Bake_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0*>::get(),
                                                                             "<Bake>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0::__ColliderBatch____c__DisplayClass29_0() {}
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.get_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ColliderBatcher__ColliderBatchData (::GlobalNamespace::ColliderBatch::*)()>(
    &::GlobalNamespace::ColliderBatch::get_data)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x275c600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "get_data",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.set_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)(::GlobalNamespace::__ColliderBatcher__ColliderBatchData)>(
    &::GlobalNamespace::ColliderBatch::set_data)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x275c614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "set_data", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.get_isBaked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ColliderBatch::*)()>(&::GlobalNamespace::ColliderBatch::get_isBaked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x275c628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "get_isBaked",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.set_isBaked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)(bool)>(&::GlobalNamespace::ColliderBatch::set_isBaked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x275c630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "set_isBaked",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.get_isBakeQueued
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ColliderBatch::*)()>(&::GlobalNamespace::ColliderBatch::get_isBakeQueued)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x275c63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "get_isBakeQueued",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.set_isBakeQueued
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)(bool)>(&::GlobalNamespace::ColliderBatch::set_isBakeQueued)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x275c644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "set_isBakeQueued",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)(::GlobalNamespace::__ColliderBatcher__ColliderBatchData)>(
    &::GlobalNamespace::ColliderBatch::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x275c650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ColliderBatch::*)(::GlobalNamespace::MapObject*)>(
    &::GlobalNamespace::ColliderBatch::Register)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x275c6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.Deregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)(::GlobalNamespace::MapObject*)>(
    &::GlobalNamespace::ColliderBatch::Deregister)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x275c7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "Deregister", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.SetIsBaked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)(bool)>(&::GlobalNamespace::ColliderBatch::SetIsBaked)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x275c8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "SetIsBaked",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.QueueBake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)()>(&::GlobalNamespace::ColliderBatch::QueueBake)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x275c8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "QueueBake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)()>(&::GlobalNamespace::ColliderBatch::OnUpdate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x275ca68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "OnUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.TryStopBakeThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)()>(&::GlobalNamespace::ColliderBatch::TryStopBakeThread)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x275d710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "TryStopBakeThread",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.Bake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)()>(&::GlobalNamespace::ColliderBatch::Bake)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x275cc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "Bake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.Unbake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)()>(&::GlobalNamespace::ColliderBatch::Unbake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x275c840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "Unbake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.DestroySelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)()>(&::GlobalNamespace::ColliderBatch::DestroySelf)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x275deb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "DestroySelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderBatch.DestroySelfSilent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColliderBatch::*)()>(&::GlobalNamespace::ColliderBatch::DestroySelfSilent)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x275e008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "DestroySelfSilent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__ColliderBatcher__ColliderBatchData& GlobalNamespace::ColliderBatch::__cordl_internal_get__data_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data_k__BackingField;
}
constexpr ::GlobalNamespace::__ColliderBatcher__ColliderBatchData const& GlobalNamespace::ColliderBatch::__cordl_internal_get__data_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data_k__BackingField;
}
constexpr void GlobalNamespace::ColliderBatch::__cordl_internal_set__data_k__BackingField(::GlobalNamespace::__ColliderBatcher__ColliderBatchData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data_k__BackingField = value;
}
constexpr bool& GlobalNamespace::ColliderBatch::__cordl_internal_get__isBaked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBaked_k__BackingField;
}
constexpr bool const& GlobalNamespace::ColliderBatch::__cordl_internal_get__isBaked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBaked_k__BackingField;
}
constexpr void GlobalNamespace::ColliderBatch::__cordl_internal_set__isBaked_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isBaked_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*& GlobalNamespace::ColliderBatch::__cordl_internal_get_mapObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*> const&
GlobalNamespace::ColliderBatch::__cordl_internal_get_mapObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjects;
}
constexpr void GlobalNamespace::ColliderBatch::__cordl_internal_set_mapObjects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mapObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ColliderBatch::__cordl_internal_get__isBakeQueued_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBakeQueued_k__BackingField;
}
constexpr bool const& GlobalNamespace::ColliderBatch::__cordl_internal_get__isBakeQueued_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBakeQueued_k__BackingField;
}
constexpr void GlobalNamespace::ColliderBatch::__cordl_internal_set__isBakeQueued_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isBakeQueued_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::ColliderBatch::__cordl_internal_get_bakeTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakeTimer;
}
constexpr float_t const& GlobalNamespace::ColliderBatch::__cordl_internal_get_bakeTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakeTimer;
}
constexpr void GlobalNamespace::ColliderBatch::__cordl_internal_set_bakeTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bakeTimer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ColliderBatch::__cordl_internal_get_bakedObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ColliderBatch::__cordl_internal_get_bakedObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakedObject;
}
constexpr void GlobalNamespace::ColliderBatch::__cordl_internal_set_bakedObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bakedObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::ColliderBatch::__cordl_internal_get_bakeDimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakeDimensions;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::ColliderBatch::__cordl_internal_get_bakeDimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakeDimensions;
}
constexpr void GlobalNamespace::ColliderBatch::__cordl_internal_set_bakeDimensions(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bakeDimensions = value;
}
constexpr ::System::Threading::Thread*& GlobalNamespace::ColliderBatch::__cordl_internal_get_bakeThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakeThread;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& GlobalNamespace::ColliderBatch::__cordl_internal_get_bakeThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakeThread;
}
constexpr void GlobalNamespace::ColliderBatch::__cordl_internal_set_bakeThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bakeThread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ColliderBatch::__cordl_internal_get_desiresBakeOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiresBakeOutput;
}
constexpr bool const& GlobalNamespace::ColliderBatch::__cordl_internal_get_desiresBakeOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiresBakeOutput;
}
constexpr void GlobalNamespace::ColliderBatch::__cordl_internal_set_desiresBakeOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___desiresBakeOutput = value;
}
constexpr bool& GlobalNamespace::ColliderBatch::__cordl_internal_get_isBakeThreadOutputReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isBakeThreadOutputReady;
}
constexpr bool const& GlobalNamespace::ColliderBatch::__cordl_internal_get_isBakeThreadOutputReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isBakeThreadOutputReady;
}
constexpr void GlobalNamespace::ColliderBatch::__cordl_internal_set_isBakeThreadOutputReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isBakeThreadOutputReady = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*&
GlobalNamespace::ColliderBatch::__cordl_internal_get_bakeThreadOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakeThreadOutput;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*> const&
GlobalNamespace::ColliderBatch::__cordl_internal_get_bakeThreadOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bakeThreadOutput;
}
constexpr void
GlobalNamespace::ColliderBatch::__cordl_internal_set_bakeThreadOutput(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bakeThreadOutput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__ColliderBatcher__ColliderBatchData GlobalNamespace::ColliderBatch::get_data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "get_data",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ColliderBatcher__ColliderBatchData, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatch::set_data(::GlobalNamespace::__ColliderBatcher__ColliderBatchData value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "set_data", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ColliderBatch::get_isBaked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "get_isBaked",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatch::set_isBaked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "set_isBaked",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ColliderBatch::get_isBakeQueued() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "get_isBakeQueued",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatch::set_isBakeQueued(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "set_isBakeQueued",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ColliderBatch* GlobalNamespace::ColliderBatch::New_ctor(::GlobalNamespace::__ColliderBatcher__ColliderBatchData data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColliderBatch*>(data));
}
inline void GlobalNamespace::ColliderBatch::_ctor(::GlobalNamespace::__ColliderBatcher__ColliderBatchData data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline bool GlobalNamespace::ColliderBatch::Register(::GlobalNamespace::MapObject* mapObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mapObject);
}
inline void GlobalNamespace::ColliderBatch::Deregister(::GlobalNamespace::MapObject* mapObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "Deregister", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapObject);
}
inline void GlobalNamespace::ColliderBatch::SetIsBaked(bool newIsBaked) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "SetIsBaked", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsBaked);
}
inline void GlobalNamespace::ColliderBatch::QueueBake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "QueueBake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatch::OnUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "OnUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatch::TryStopBakeThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "TryStopBakeThread",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatch::Bake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "Bake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatch::Unbake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "Unbake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatch::DestroySelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "DestroySelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderBatch::DestroySelfSilent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColliderBatch*>::get(), "DestroySelfSilent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColliderBatch::ColliderBatch() {}
