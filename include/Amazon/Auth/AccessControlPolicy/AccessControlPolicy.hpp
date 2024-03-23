#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Auth/AccessControlPolicy/ActionIdentifier.hpp"
#include "Amazon/Auth/AccessControlPolicy/Condition.hpp"
#include "Amazon/Auth/AccessControlPolicy/ConditionFactory.hpp"
#include "Amazon/Auth/AccessControlPolicy/Policy.hpp"
#include "Amazon/Auth/AccessControlPolicy/Principal.hpp"
#include "Amazon/Auth/AccessControlPolicy/Resource.hpp"
#include "Amazon/Auth/AccessControlPolicy/ResourceFactory.hpp"
#include "Amazon/Auth/AccessControlPolicy/Statement.hpp"
#ifdef __cpp_modules
export module AccessControlPolicy;
#endif
